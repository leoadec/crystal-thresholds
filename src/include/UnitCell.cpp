#include <iostream>

#include "UnitCell.h"

UnitCell::~UnitCell() {
  short f;

  delete [] e_start;
  delete [] e_end;
  delete [] e_Dx;
  delete [] e_Dy;
  delete [] e_Dz;

  if (poly_edges) {
    delete [] e_poly;
  }

  if (faces>0) {
    delete [] f_length;
    for (f=0; f<faces; f++) {
      delete [] f_edges[f];
      delete [] f_Dx[f];
      delete [] f_Dy[f];
      delete [] f_Dz[f];
    };
    delete [] f_edges;
    delete [] f_Dx;
    delete [] f_Dy;
    delete [] f_Dz;
  };
};


UnitCell::UnitCell (std::string _name, short v, short e) {
  vertices = v;
  edges = e;
  faces = 0;

  name = _name;

  e_start = new short[edges];
  e_end = new short[edges];
  e_Dx = new short[edges];
  e_Dy = new short[edges];
  e_Dz = new short[edges];
};



UnitCell::UnitCell (std::string _name, short v, short e, short f) {
  vertices = v;
  edges = e;
  faces = f;


  name = _name;

  poly_edges = false; // no double edges, unless explicitly stated

  e_start = new short[edges];
  e_end = new short[edges];
  e_Dx = new short[edges];
  e_Dy = new short[edges];
  e_Dz = new short[edges];

  if (f>0) {
    f_length = new short[faces];
    f_edges = new short*[faces];
    f_Dx = new short*[faces];
    f_Dy = new short*[faces];
    f_Dz = new short*[faces];
  };
};



void UnitCell::AllowPolyEdges() {
  poly_edges = true;

  e_poly = new short[edges];

  return;
}

bool UnitCell::HasPolyEdges() {
  return poly_edges;
}


std::string UnitCell::Name() {
  return name;
}

short UnitCell::GetVertices() {
  return vertices;
}

short UnitCell::GetEdges() {
  return edges;
}

short UnitCell::GetFaces() {
  return faces;
}


short UnitCell::GetEdgeStart(short e) {
	if (e > edges) {
		std::cerr << "Edge number too high." << std::endl;
		return -1;
	};

	return e_start[e];
}

short UnitCell::GetEdgeEnd(short e) {
	if (e > edges) {
		std::cerr << "Edge number too high." << std::endl;
		return -1;
	};
	return e_end[e];
}

short UnitCell::GetEdgeDX(short e) {
	if (e > edges) {
		std::cerr << "Edge number too high." << std::endl;
		return -1;
	};
	return e_Dx[e];
}

short UnitCell::GetEdgeDY(short e) {
	if (e > edges) {
		std::cerr << "Edge number too high." << std::endl;
		return false;
	};
	return e_Dy[e];
}

short UnitCell::GetEdgeDZ(short e) {
	if (e > edges) {
		std::cerr << "Edge number too high." << std::endl;
		return false;
	};
	return e_Dz[e];
}

short UnitCell::GetPolyWeight(short e) {
	if (e > edges) {
		std::cerr << "Edge number too high." << std::endl;
		return -1;
	};

	return e_poly[e];
}






bool UnitCell::SetEdge(short e, short v1, short v2, short cx, short cy, short cz) {
  if (e > edges) {
    std::cerr << "Edge number too high." << std::endl;
    return false;
  };
  if (v1 > vertices || v2 > vertices) {
    std::cerr << "Vertex number too high." << std::endl;
    return false;
  };

  e_start[e] = v1;
  e_end[e] = v2;
  e_Dx[e] = cx;
  e_Dy[e] = cy;
  e_Dz[e] = cz;

  if (poly_edges) e_poly[e] = 1;

  return true;
}



bool UnitCell::SetDoubleEdge(short e, short v1, short v2, short cx, short cy, short cz) {
  if (e > edges) {
    std::cerr << "Edge number too high." << std::endl;
    return false;
  };
  if (v1 > vertices || v2 > vertices) {
    std::cerr << "Vertex number too high." << std::endl;
    return false;
  };

  e_start[e] = v1;
  e_end[e] = v2;
  e_Dx[e] = cx;
  e_Dy[e] = cy;
  e_Dz[e] = cz;

  if (poly_edges) e_poly[e] = 2;

  return true;
}







short UnitCell::GetEdgesInFace(short f) {
  if (f > faces) {
    std::cerr << "Face number too high." << std::endl;
    return -1;
  };

  return f_length[f];
}

short UnitCell::GetEdgeInFace(short f, short n){
  if (f > faces) {
    std::cerr << "Face number too high." << std::endl;
    return -1;
  };
  if (n >  f_length[f]) {
    std::cerr << "Too many edges in face." << std::endl;
    return -1;
  };

  return f_edges[f][n];
}

short UnitCell::GetEdgeCellXInFace(short f, short n){
  if (f > faces) {
    std::cerr << "Face number too high." << std::endl;
    return false;
  };
  if (n > f_length[f]) {
    std::cerr << "Too many edges in face." << std::endl;
    return false;
  };
  return f_Dx[f][n];
}

short UnitCell::GetEdgeCellYInFace(short f, short n){
  if (f > faces) {
    std::cerr << "Face number too high." << std::endl;
    return false;
  };
  if (n > f_length[f]) {
    std::cerr << "Too many edges in face." << std::endl;
    return false;
  };
  return f_Dy[f][n];
}

short UnitCell::GetEdgeCellZInFace(short f, short n){
  if (f > faces) {
    std::cerr << "Face number too high." << std::endl;
    return false;
  };
  if (n > f_length[f]) {
    std::cerr << "Too many edges in face." << std::endl;
    return false;
  };
  return f_Dz[f][n];
}






bool UnitCell::SetFace(short f, short e) {
  if (f > faces) {
    std::cerr << "Face number too high." << std::endl;
    return false;
  };

  f_length[f] = e;
  f_edges[f] = new short[e];
  f_Dx[f] = new short[e];
  f_Dy[f] = new short[e];
  f_Dz[f] = new short[e];

  return true;
}

bool UnitCell::SetEdgeInFace(short f, short n, short e, short cx, short cy, short cz){
  if (e > edges) {
    std::cerr << "Edge number too high." << std::endl;
    return false;
  };
  if (f > faces) {
    std::cerr << "Face number too high." << std::endl;
    return false;
  };
  if (n > f_length[f]) {
    std::cerr << "Too many edges in face." << std::endl;
    return false;
  };

  f_edges[f][n] = e;
  f_Dx[f][n] = cx;
  f_Dy[f][n] = cy;
  f_Dz[f][n] = cz;

  return true;
}
