#include "../include/Lattice.h"

#include <cassert>

// Newman-Ziff method, as described in PRE 64, 016706

#define MAX_NEIGHBORS 40






class Wrap {
private:
  int bonds; // number of bonds

  int wrap[3];

  int sample; // number of bonds shuffled
  int *shuffle; // random ordering of the bonds

  int **neighbors; // whethere two bonds are neighbors or not.

  int *pointer; // pointers from one bond to another
  int *pointer_Dx;
  int *pointer_Dy;
  int *pointer_Dz;
  int *cell_x;
  int *cell_y;
  int *cell_z;

  // finds the root of a cluster
  int root(int b) { if (pointer[b]<0) return b; return root(pointer[b]); };

  // only use this for debugging puposes
  int verbose_root(int b, int origin) {
    std::cerr << "Looking for the root of " << origin << " we found pointer[" << b << "]= " << pointer[b] << std::endl;
    std::cerr << "The cell of " << b << " is (" << cell_x[b] << ", " << cell_y[b] << ", "<< cell_z[b] << ") " << std::endl;
    std::cerr << "The pointer  vector of " << b << " is (" << pointer_Dx[b] << ", " << pointer_Dy[b] << ", "<< pointer_Dz[b] << ") " << std::endl;

    if (pointer[b]<0) return b;

    return verbose_root(pointer[b], origin);
  };

  int get_path_x_verbose(int b, int origin ) {
    std::cerr << "Looking for " << origin << ": " << b << " at (" << cell_x[b] << ", " << cell_y[b] << ", "<< cell_z[b] << ")  points to " <<pointer[b] <<"  via " << pointer_Dx[b] << ", " << pointer_Dy[b] << ", " << pointer_Dz[b] << std::endl;

    if (pointer[b]<0) {
      return pointer_Dx[b];
    };
    return pointer_Dx[b] + get_path_x_verbose(pointer[b],origin);
  }

  // follows path of vectors, until root is found
  int get_path_x(int b) {
    if (pointer[b]<0) {
      return pointer_Dx[b];
    };
    return pointer_Dx[b] + get_path_x(pointer[b]);
  }

  int get_path_y(int b) {
    if (pointer[b]<0) {
      return pointer_Dy[b];
    };
    return pointer_Dy[b] + get_path_y(pointer[b]);
  }


  int get_path_z(int b) {
    // std::cerr << b << " at (" << cell_x[b] << ", " << cell_y[b] << ", "<< cell_z[b] << ")  points to " <<pointer[b] <<"  via " << pointer_Dx[b] << ", " << pointer_Dy[b] << ", " << pointer_Dz[b] << std::endl;

    if (pointer[b]<0) {
      return pointer_Dz[b];
    };
    return pointer_Dz[b] + get_path_z(pointer[b]);
  }

  // Generates a random number between 0 and 1
  long double random_fraction() { return ((long double) 1.*rand())/RAND_MAX; };

public:
  // destructor
  ~Wrap() {
    if (sample>0) delete [] shuffle;

    delete [] pointer;
    delete [] pointer_Dx;
    delete [] pointer_Dy;
    delete [] pointer_Dz;
    delete [] cell_x;
    delete [] cell_y;
    delete [] cell_z;

    for (int b=0; b<bonds; b++) delete [] neighbors[b];

    delete [] neighbors;
  }

  // constructor
  Wrap(Lattice *lattice) {
    bonds = lattice->GetBlackEdges();

    wrap[0] = 0;
    wrap[1] = 0;
    wrap[2] = 0;

    sample = 0; // initially, no ordering;

    pointer = new int[bonds];
    pointer_Dx = new int[bonds];
    pointer_Dy = new int[bonds];
    pointer_Dz = new int[bonds];
    cell_x = new int[bonds];
    cell_y = new int[bonds];
    cell_z = new int[bonds];

    neighbors = new int*[bonds];

    for (int b=0; b<bonds; b++) {
      pointer[b] = -1;
      pointer_Dx[b] = 0;
      pointer_Dy[b] = 0;
      pointer_Dz[b] = 0;
      cell_x[b] = lattice->GetEdgeCellX(b);
      cell_y[b] = lattice->GetEdgeCellY(b);
      cell_z[b] = lattice->GetEdgeCellZ(b);

      neighbors[b] = new int[MAX_NEIGHBORS];
      neighbors[b][0] = 0;
      for (int cx=cell_x[b]-1; cx<=cell_x[b]+1; cx++)
      for (int cy=cell_y[b]-1; cy<=cell_y[b]+1; cy++)
      for (int cz=cell_z[b]-1; cz<=cell_z[b]+1; cz++)
      for (int b2=lattice->FirstEdgeInCell(cx,cy,cz); b2<=lattice->LastEdgeInCell(cx,cy,cz); b2++) {
        if (lattice->BlackEdgesTouch(b2,b) and b2<b) {
          neighbors[b][0] += 1;
          neighbors[b2][0] += 1;
          if (neighbors[b][0]>=MAX_NEIGHBORS or neighbors[b2][0]>MAX_NEIGHBORS)
            std::cerr << "These edges have too many neighbors." << std::endl;
          neighbors[b][neighbors[b][0]] = b2;
          neighbors[b2][neighbors[b2][0]] = b;
        };
      };
    };
  }

  long double GetPc(int dimensions){
    return 1.*wrap[dimensions]/bonds;
  }

  // get wrapping point results
  // return true if wrapping points were found
  bool HasWrap() {
    if (wrap[0]>0 and wrap[1]>0 and wrap[2]>0) return true;

    return false;
  }

  // Generates a random permutation of imax elements of a list of bonds
  // and stores it in order[].
  void Shuffle(int max) {
      srand(time(0));

      int *aux = new int[bonds];

      if (sample>0) delete [] shuffle;
      shuffle = new int[max];
      sample = max;

      for (int i=0; i<bonds; i++) aux[i] = i;

      for (int i=0; i<sample; i++) {
  	     int random_bond = (int) (bonds-i)*random_fraction();
  	     int swap = i + random_bond;
  	     shuffle[i] = aux[swap];
  	     aux[swap] = aux[i];
      };

      delete [] aux;

      return;
  }



  void Percolate() {
      for (int i=0; (i<sample) and ((wrap[0]<1) or (wrap[1]<1) or (wrap[2]<1)); i++) {
        int b1 = shuffle[i];
        int r1 = shuffle[i];

        pointer[b1] -= 1;

        // Checks for neighbors of this bond
        for(int j=0; j<neighbors[b1][0]; j++) {
          int b2 = neighbors[b1][j+1];
            if (pointer[b2] != -1) {
              int r2 = root(b2);
              if (r2!=r1) {
                // B is the bigger cluster, S the smaller
                int rB = r2; int rS = r1; int bB = b2; int bS = b1;
                if (pointer[r1]<pointer[r2]) { rB = r1; rS = r2; bB = b1; bS = b2; };
                pointer[rB] += pointer[rS] + 1;
                pointer_Dx[rS] = - get_path_x(bS);
                pointer_Dy[rS] = - get_path_y(bS);
                pointer_Dz[rS] = - get_path_z(bS);
                pointer[rS] = bS;
                pointer_Dx[bS] = cell_x[bB] - cell_x[bS];
                pointer_Dy[bS] = cell_y[bB] - cell_y[bS];
                pointer_Dz[bS] = cell_z[bB] - cell_z[bS];
                if ((cell_x[bB] - cell_x[bS])>1) pointer_Dx[bS] = -1;
                if ((cell_y[bB] - cell_y[bS])>1) pointer_Dy[bS] = -1;
                if ((cell_z[bB] - cell_z[bS])>1) pointer_Dz[bS] = -1;
                if ((cell_x[bB] - cell_x[bS])<-1) pointer_Dx[bS] = 1;
                if ((cell_y[bB] - cell_y[bS])<-1) pointer_Dy[bS] = 1;
                if ((cell_z[bB] - cell_z[bS])<-1) pointer_Dz[bS] = 1;
                pointer[bS] = bB;
                r1 = rB;
              } else {
                int vx1 = get_path_x(b1);
                int vy1 = get_path_y(b1);
                int vz1 = get_path_z(b1);
                int vx2 = get_path_x(b2);
                int vy2 = get_path_y(b2);
                int vz2 = get_path_z(b2);
                if ( wrap[0]<1 and ((abs(vx1-vx2)>1) or (abs(vy1-vy2)>1) or (abs(vz1-vz2)>1)) )
                  { wrap[0]=i+1; };
                if ( wrap[1]<1 and (((abs(vx1-vx2)>1) and (abs(vy1-vy2)>1))
                    or ((abs(vx1-vx2)>1) and (abs(vz1-vz2)>1))
                    or ((abs(vy1-vy2)>1) and (abs(vz1-vz2)>1)) ) )
                  { wrap[1]=i+1; };
                if ( wrap[2]<1 and ((abs(vx1-vx2)>1) and (abs(vy1-vy2)>1) and (abs(vz1-vz2)>1)) )
                  { wrap[2]=i+1; };
              };
          };
        };
      };
  };
};














int main(int argc, char **argv) {
     if (argc<3) {
	     std::cout << "Usage: " << argv[0] << " [lattice side size] [threshold upper limit]" << std::endl;
       return 1;
     };

     int L = atoi(argv[1]); // size of the side of the lattice
     double max_t = strtod(argv[2], NULL); // maximum fraction of bonds filled

     UnitCell *unit_cell = _UnitCell();
     Lattice *lattice = new Lattice(L, unit_cell);
     delete unit_cell;

     int max = (int) (max_t*lattice->GetBlackEdges());
     if (max > lattice->GetBlackEdges()) max = lattice->GetBlackEdges();

     Wrap *wrap = new Wrap(lattice);
     delete lattice;

     wrap->Shuffle(max);

     wrap->Percolate();

     if (wrap->HasWrap()) {
       std::cout << "# L \t\t Wrap in 1D \t\t Wrap in 2D \t\t Wrap in 3D" << std::endl;
	     std::cout << L << " \t\t " << wrap->GetPc(0) << " \t\t " << wrap->GetPc(1) << " \t\t " << wrap->GetPc(2) << std::endl;
     } else {
	      std::cerr << "Threshold estimate reached upper limit. Try a higher upper bound." << std::endl;
     };

     delete wrap;

     return 0;
}
