import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import sys

if ( len(sys.argv)<2 ):
    print ("Please provide the name of the lattice.")
    exit()

tiling_input_available = False
if len(sys.argv)>2:
    if sys.argv[2]=="True":
        tiling_input_available = True

def symbol_meaning(symbol, coords):
    if   symbol == "x":
        return coords[0]
    elif symbol == "x+1/4":
        return coords[0]+.25
    elif symbol == "x+1/2":
        return coords[0]+.5
    elif symbol == "x+3/4":
        return coords[0]+.75
    elif symbol == "x+1":
        return coords[0]+1.
    elif symbol == "x+5/4":
        return coords[0]+1.25
    elif symbol == "x-1/4":
        return coords[0]-.25
    elif symbol == "x-1/2":
        return coords[0]-.5
    elif symbol == "x-3/4":
        return coords[0]-.75
    elif symbol == "x-1":
        return coords[0]-1.
    elif symbol == "x-5/4":
        return coords[0]-1.25
    elif symbol == "y":
        return coords[1]
    elif symbol == "y+1/4":
        return coords[1]+.25
    elif symbol == "y+1/2":
        return coords[1]+.5
    elif symbol == "y+3/4":
        return coords[1]+.75
    elif symbol == "y+1":
        return coords[1]+1.
    elif symbol == "y+5/4":
        return coords[1]+1.25
    elif symbol == "y-1/4":
        return coords[1]-.25
    elif symbol == "y-1/2":
        return coords[1]-.5
    elif symbol == "y-3/4":
        return coords[1]-.75
    elif symbol == "y-1":
        return coords[1]-1.
    elif symbol == "y-5/4":
        return coords[1]-1.25
    elif symbol == "z":
        return coords[2]
    elif symbol == "z+1/6":
        return coords[2]+1./6.
    elif symbol == "z+1/4":
        return coords[2]+.25
    elif symbol == "z+1/3":
        return coords[2]+1./3.
    elif symbol == "z+1/2":
        return coords[2]+.5
    elif symbol == "z+2/3":
        return coords[2]+2./3.
    elif symbol == "z+3/4":
        return coords[2]+.75
    elif symbol == "z+1":
        return coords[2]+1.
    elif symbol == "z+5/4":
        return coords[2]+1.25
    elif symbol == "z+5/6":
        return coords[2]+5./6.
    elif symbol == "z-1/4":
        return coords[2]-.25
    elif symbol == "z-1/2":
        return coords[2]-.5
    elif symbol == "z-3/4":
        return coords[2]-.75
    elif symbol == "z-1":
        return coords[2]-1.
    elif symbol == "z-5/4":
        return coords[2]-1.25
    elif symbol == "z-5/6":
        return coords[2]-5./6.
    elif symbol == "-x":
        return -coords[0]
    elif symbol == "-x+1/4":
        return -coords[0]+.25
    elif symbol == "-x+1/2":
        return -coords[0]+.5
    elif symbol == "-x+3/4":
        return -coords[0]+.75
    elif symbol == "-x+1":
        return -coords[0]+1.
    elif symbol == "-x+5/4":
        return -coords[0]+1.25
    elif symbol == "-x-1/4":
        return -coords[0]-.25
    elif symbol == "-x-1/2":
        return -coords[0]-.5
    elif symbol == "-x-3/4":
        return -coords[0]-.75
    elif symbol == "-x-1":
        return -coords[0]-1.
    elif symbol == "-x-5/4":
        return -coords[0]-1.25
    elif symbol == "-y":
         return -coords[1]
    elif symbol == "-y+1/4":
        return -coords[1]+.25
    elif symbol == "-y+1/2":
        return -coords[1]+.5
    elif symbol == "-y+3/4":
        return -coords[1]+.75
    elif symbol == "-y+1":
        return -coords[1]+1.
    elif symbol == "-y+5/4":
        return -coords[1]+1.25
    elif symbol == "-y-1/4":
        return -coords[1]-.25
    elif symbol == "-y-1/2":
        return -coords[1]-.5
    elif symbol == "-y-3/4":
        return -coords[1]-.75
    elif symbol == "-y-1":
        return -coords[1]-1.
    elif symbol == "-y-5/4":
        return -coords[1]-1.25
    elif symbol == "-z":
         return -coords[2]
    elif symbol == "-z+1/6":
        return -coords[2]+1./6.
    elif symbol == "-z+1/4":
        return -coords[2]+.25
    elif symbol == "-z+1/3":
        return -coords[2]+1./3.
    elif symbol == "-z+1/2":
        return -coords[2]+.5
    elif symbol == "-z+2/3":
        return -coords[2]+2./3.
    elif symbol == "-z+3/4":
        return -coords[2]+.75
    elif symbol == "-z+5/6":
        return -coords[2]+5./6.
    elif symbol == "-z+1":
        return -coords[2]+1.
    elif symbol == "-z+5/4":
        return -coords[2]+1.25
    elif symbol == "-z-1/4":
        return -coords[2]-.25
    elif symbol == "-z-1/2":
        return -coords[2]-.5
    elif symbol == "-z-3/4":
        return -coords[2]-.75
    elif symbol == "-z-1":
        return -coords[2]-1.
    elif symbol == "-z-5/4":
        return -coords[2]-1.25
    elif symbol == "-z-5/6":
        return -coords[2]-5./6.
    elif symbol == "x-y":
        return coords[0]-coords[1]
    elif symbol == "-x+y":
        return -coords[0]+coords[1]
    print("Unrecognized symmetry notation: " + symbol )
    return np.nan

def apply_reflection(coords, original, reflection):
    input = np.zeros(3)
    for i in range(3):
        input[i] = symbol_meaning(original[i], coords)

    output = np.zeros(3)
    for i in range(3):
        output[i] = symbol_meaning(reflection[i], input)

    return output[0], output[1], output[2]

def vector_in_list(vector, list):
    for element in list:
        if (abs(vector[0]-element[0])<.01
            and abs(vector[1]-element[1])<.01
            and abs(vector[2]-element[2])<.01 ):
            return True
    return False

def edge_in_list(edge, list):
    for element in list:
        if (edge[2]==element[2] and edge[3]==element[3] and edge[4]==element[4]):
            if (edge[0]==element[0] and edge[1]==element[1]):
                return True
        if (edge[2]==-element[2] and edge[3]==-element[3] and edge[4]==-element[4]):
            if (edge[1]==element[0] and edge[0]==element[1]):
                return True
    return False

def put_in_fundamental_cell(vector):
    for i in range(3):
        vector[i] = vector[i]-np.floor(vector[i])
        if vector[i]>0.9999:
            vector[i]=0.
    return

def find_vertex_number(vertex, vertices):
    cell = [0,0,0]
    for i in range(3):
        if np.abs(vertex[i]-np.round(vertex[i]))<.0001:
            vertex[i] = np.round(vertex[i])
        cell[i] = np.int(np.floor(1.*vertex[i]))
    for i in range(len(vertices)):
        if (np.abs(vertex[0]-cell[0]-vertices[i][0])<.01
            and np.abs(vertex[1]-cell[1]-vertices[i][1])<.01
            and np.abs(vertex[2]-cell[2]-vertices[i][2])<.01 ):
                return cell[0], cell[1], cell[2], i
    print("Vertex not found for lattice " + sys.argv[1] +  ": " + str(vertex) )
    return cell[0], cell[1], cell[2], np.nan

def find_edge_number(edge, list):
    for i in range(len(list)):
        if (edge[2]==list[i][2] and edge[3]==list[i][3] and edge[4]==list[i][4]):
            if (edge[0]==list[i][0] and edge[1]==list[i][1]):
                return i, False
        if (edge[2]==-list[i][2] and edge[3]==-list[i][3] and edge[4]==-list[i][4]):
            if (edge[1]==list[i][0] and edge[0]==list[i][1]):
                return i, True
    print("Edge not found for lattice " + sys.argv[1] +  ": " + str(edge) )
    return np.nan, False

def centralize_ring(ring, center):
    origin = [ring[center][1][0], ring[center][1][1], ring[center][1][2]]
    for vertex in ring:
        for i in range(3):
            vertex[1][i] = vertex[1][i] - origin[i]
    return

def repeated_ring(vertex_list):
    length = len(vertex_list[-1])
    ring = []
    for j in range(length):
        ring.append( [vertex_list[-1][j][0],[vertex_list[-1][j][1][0],
                vertex_list[-1][j][1][1], vertex_list[-1][j][1][2]] ] )
    for j in range(length):
      centralize_ring(ring, j)
      for i in range(len(vertex_list)-1):
        face = vertex_list[i]
        if length==len(face):
            matches = 0
            for r_vertex in ring:
                for f_vertex in face:
                    if (f_vertex[0]==r_vertex[0] and f_vertex[1][0]==r_vertex[1][0]
                        and f_vertex[1][1]==r_vertex[1][1] and f_vertex[1][2]==r_vertex[1][2]):
                            matches += 1
            if matches==length:
                return True
    return False


symmetry_filename = "../symmetries/" + sys.argv[1] + ".txt"
symmetry_input = open(symmetry_filename, "r")


original = []
reflections = []

for line in symmetry_input:
    data = line.split()
    vector = data[-1].split(",")
    if len(data)>1:
        original = vector
    else:
        reflections.append(vector)

symmetry_input.close()

lattice_filename = "../lattices/" + sys.argv[1] + ".cgd"
lattice_input = open(lattice_filename, "r")

vertex = np.zeros(3)
vertices = []
edges = []

vec = np.zeros(3)
vec1 = np.zeros(3)
vec2 = np.zeros(3)
begin = np.zeros(3)
end = np.zeros(3)

cell1 = [0,0,0]
cell2 = [0,0,0]
diff = [0,0,0]

for line in lattice_input:
    data = line.split()
    if (data[0] == "CELL"):
        fund_x = float(data[1])
        fund_y = float(data[2])
        fund_z = float(data[3])
        if float(data[4]) != 90:
            print ("Warning! alpha=" + data[4] + " for lattice " + sys.argv[1] )
        if float(data[5]) != 90:
            print ("Warning! beta=" + data[5] + " for lattice " + sys.argv[1] )
        if float(data[6]) != 90:
            print ("Warning! gamma=" + data[6] + " for lattice " + sys.argv[1] )
    elif (data[0] == "NODE"):
        vertex[0] = float(data[3])
        vertex[1] = float(data[4])
        vertex[2] = float(data[5])
        for reflection in reflections:
            vec[0], vec[1], vec[2] = apply_reflection(1.*vertex, original, reflection)
            put_in_fundamental_cell(vec)
            if not vector_in_list(vec, vertices):
                vertices.append(1.*vec)
    elif (data[0] == "EDGE"):
        begin[0] = float(data[1])
        begin[1] = float(data[2])
        begin[2] = float(data[3])
        end[0] = float(data[4])
        end[1] = float(data[5])
        end[2] = float(data[6])
        for reflection in reflections:
            vec1[0], vec1[1], vec1[2] = apply_reflection(1.*begin, original, reflection)
            vec2[0], vec2[1], vec2[2] = apply_reflection(1.*end, original, reflection)
            cell1[0], cell1[1], cell1[2], vertex1 = find_vertex_number(1.*vec1, vertices)
            cell2[0], cell2[1], cell2[2], vertex2 = find_vertex_number(1.*vec2, vertices)
            for i in range(3):
                diff[i] = cell2[i] - cell1[i]
            if not edge_in_list([vertex1, vertex2, diff[0], diff[1], diff[2]], edges):
                edges.append([vertex1, vertex2, diff[0], diff[1], diff[2]])

lattice_input.close()


aspect = fund_z/np.sqrt(fund_x**2.+fund_y**2.)

fig = plt.figure()
ax = Axes3D(fig)
# Matplotlib 3.1 broke the line below
# ax.set_aspect(aspect)
ax.set_title(sys.argv[1] + " fundamental cell")
ax.axes.set_xlim3d(left=0,right=fund_x)
ax.axes.set_ylim3d(top=0,bottom=fund_y)
ax.axes.set_zlim3d(bottom=0,top=fund_z)
color = 11
for edge in edges:
    vertex = 1.*vertices[edge[0]]
    vertex2 = 1.*vertices[edge[1]]
    ax.plot([fund_x*vertex[0], fund_x*(vertex2[0]+edge[2])],
        [fund_y*vertex[1], fund_y*(vertex2[1]+edge[3])],
        [fund_z*vertex[2], fund_z*(vertex2[2]+edge[4])], color="#" + str(100-color) + str(color) + "ff")
    if (edge[2]!=0) or (edge[3]!=0) or (edge[4]!=0):
        ax.plot([fund_x*(vertex[0]-edge[2]), fund_x*vertex2[0]],
            [fund_y*(vertex[1]-edge[3]), fund_y*vertex2[1]],
            [fund_z*(vertex[2]-edge[4]), fund_z*vertex2[2]], color="#" + str(100-color) + str(color) + "ff")
    color+= 7
    color = color%90
    if color<10:
        color=10
for vertex in vertices:
    ax.scatter(fund_x*vertex[0], fund_y*vertex[1], fund_z*vertex[2], color="orange", s=50 )
fig.savefig("../doc/" + sys.argv[1] + ".pdf")
plt.close()

if tiling_input_available:
    tiling_filename = "../tilings/" + sys.argv[1] + ".cgd"
    tiling_input = open(tiling_filename, "r")

    vertex_list = []

    in_face = False
    cell = [0,0,0]
    vec = np.zeros(3)

    for line in tiling_input:
        data = line.split()
        if data[0]=="END":
            in_face = False
        elif data[0]=="FACES":
            in_face = True
            vertex_list.append([])
        elif in_face:
            vec[0] = float(data[0])
            vec[1] = float(data[1])
            vec[2] = float(data[2])
            cell[0], cell[1], cell[2], vertex = find_vertex_number(vec, vertices)
            vertex_list[-1].append([vertex, [cell[0], cell[1], cell[2]]])

    tiling_input.close()


    vec = np.zeros(3)
    vector = np.zeros(3)

    initial_nb = len(vertex_list)

    for ring in vertex_list:
        centralize_ring(ring, 0)

    for i in range(initial_nb):
        for reflection in reflections:
            vertex_list.append([])
            for vertex in vertex_list[i]:
                vector = 1.*vertices[vertex[0]]
                vector[0] += vertex[1][0]
                vector[1] += vertex[1][1]
                vector[2] += vertex[1][2]
                vec[0], vec[1], vec[2] = apply_reflection(1.*vector, original, reflection)
                cell[0], cell[1], cell[2], vertex = find_vertex_number(vec, vertices)
                vertex_list[-1].append([vertex, [cell[0], cell[1], cell[2]]])
            centralize_ring(vertex_list[-1], 0)
            if repeated_ring(vertex_list):
                del vertex_list[-1]

    faces = []

    cell1 = [0,0,0]
    cell2 = [0,0,0]
    diff = [0,0,0]

    for ring in vertex_list:
        faces.append([])
        for i in range(len(ring)):
            vertex1 = ring[i][0]
            vertex2 = ring[(i+1)%len(ring)][0]
            for j in range(3):
                cell1[j] = ring[i][1][j]
                cell2[j] = ring[(i+1)%len(ring)][1][j]
                diff[j] = cell2[j]-cell1[j]
            edge, reverse = find_edge_number([vertex1, vertex2, diff[0], diff[1], diff[2]],edges)
            if not reverse:
                faces[-1].append([edge, [cell1[0], cell1[1], cell1[2]]])
            else:
                faces[-1].append([edge, [cell2[0], cell2[1], cell2[2]]])

include_file = open("../include/" + sys.argv[1] + ".cpp", "w")

include_file.write("#include \"../../src/include/UnitCell.h\"\n\n")
include_file.write("UnitCell *_UnitCell() {\n")
if not tiling_input_available:
    include_file.write("\t UnitCell *unit_cell = new UnitCell(\"" + sys.argv[1]
        + "\", " + str(len(vertices)) + ", "
        + str(len(edges)) + ");\n\n")
elif tiling_input_available:
    include_file.write("\t UnitCell *unit_cell = new UnitCell(\"" + sys.argv[1]
        + "\", " + str(len(vertices)) + ", "
        + str(len(edges)) + ", " + str(len(faces)) + ");\n\n")

i = 0
for vertex in vertices:
    include_file.write("\t // vertex " + str(i) + " located at (" + str(vertex[0]) +
        ", " + str(vertex[1]) + ", " + str(vertex[2]) + ")\n" );
    i += 1

i = 0
for edge in edges:
    include_file.write("\n\t unit_cell->SetEdge(" + str(i) + ", " + str(edge[0]) + ", "
        + str(edge[1]) + ", " + str(edge[2]) + ", " + str(edge[3]) + ", "
        + str(edge[4]) + ");")
    i += 1
include_file.write("\n")
if tiling_input_available:
    for i in range(len(faces)):
        include_file.write("\n\t unit_cell->SetFace(" + str(i) + ", "
            + str(len(faces[i])) + ");\n")
        for j in range(len(faces[i])):
            include_file.write("\t unit_cell->SetEdgeInFace(" + str(i) + ", " + str(j) + ", "
                        + str(faces[i][j][0]) + ", " + str(faces[i][j][1][0]) + ", "
                        + str(faces[i][j][1][1]) + ", " + str(faces[i][j][1][2]) + ");\n" )
include_file.write("\n\t return unit_cell;\n}\n")
include_file.close()

report = open("../doc/" + sys.argv[1] + ".txt", "w")
report.write("FUNDAMENTAL CELL: (" + ( str(fund_x) + ", " + str(fund_y) + ", "
            + str(fund_z) ) + ")\n")
for i in range(len(vertices)):
    report.write("VERTEX " + str(i) +  ": (" + ( str(fund_x*vertices[i][0]) + ", "
            + str(fund_y*vertices[i][1]) + ", " + str(fund_z*vertices[i][2]) ) + ")\n")
for i in range(len(edges)):
    report.write("EDGE " + str(i) +  ": " + ( str(edges[i][0])
            + "(0,0,0) <-> " + str(edges[i][1]) + "("
            + str(edges[i][2]) + "," + str(edges[i][3]) + "," + str(edges[i][4]) ) + ")\n")
if tiling_input_available:
    for i in range(len(faces)):
        text = "{ "
        for j in range(len(faces[i])):
            text = ( text + str(faces[i][j][0]) + "(" + str(faces[i][j][1][0]) + ","
                + str(faces[i][j][1][1]) + "," + str(faces[i][j][1][2]) + ")" )
            if j==(len(faces[i])-1):
                text = text + " }"
            else:
                text = text + ", "
        report.write("FACE " + str(i) + ": " + text + "\n")
report.close()

if tiling_input_available:
    # fig = plt.figure(figsize=(5*aspect*2,5*aspect*int(len(faces)/2)))
    for i in range(len(faces)):
        fig = plt.figure()
        # ax = fig.add_subplot(int((len(faces)+1)/2), 2, i+1, projection="3d")
        ax = Axes3D(fig)
        # Matplotlib 3.1 broke the line below
        # ax.set_aspect(fund_z/np.sqrt(fund_x**2.+fund_y**2.))
        ax.set_title(sys.argv[1] + ", face " + str(i) )
        ax.axes.set_xlim3d(left=0,right=fund_x)
        ax.axes.set_ylim3d(top=0,bottom=fund_y)
        ax.axes.set_zlim3d(bottom=0,top=fund_z)
        for vertex in vertices:
            ax.scatter(fund_x*vertex[0], fund_y*vertex[1], fund_z*vertex[2], color="orange", s=50 )
        for edge in edges:
            vertex = 1.*vertices[edge[0]]
            vertex2 = 1.*vertices[edge[1]]
            ax.plot([fund_x*vertex[0], fund_x*(vertex2[0]+edge[2])],
                [fund_y*vertex[1], fund_y*(vertex2[1]+edge[3])],
                [fund_z*vertex[2], fund_z*(vertex2[2]+edge[4])], color="black", alpha=0.3)
            if (edge[2]!=0) or (edge[3]!=0) or (edge[4]!=0):
                ax.plot([fund_x*(vertex[0]-edge[2]), fund_x*vertex2[0]],
                    [fund_y*(vertex[1]-edge[3]), fund_y*vertex2[1]],
                    [fund_z*(vertex[2]-edge[4]), fund_z*vertex2[2]], color="black", alpha=0.3)
        for edge in faces[i]:
            vertex = 1.*(vertices[edges[edge[0]][0]] + edge[1])
            vertex2 = 1.*(vertices[edges[edge[0]][1]] + edge[1] + edges[edge[0]][2:5])
            ax.plot([fund_x*(vertex[0]), fund_x*(vertex2[0])],
                [fund_y*(vertex[1]), fund_y*(vertex2[1])],
                [fund_z*(vertex[2]), fund_z*(vertex2[2])], color="black")
        vertex0 = 1.*(vertices[edges[faces[i][0][0]][0]] + faces[i][0][1])
        prev_vertex = 1.*vertex0
        for edge in faces[i]:
            vertex = 1.*(vertices[edges[edge[0]][0]] + edge[1])
            vertex2 = 1.*(vertices[edges[edge[0]][1]] + edge[1] + edges[edge[0]][2:5])
            if np.allclose(vertex2, prev_vertex):
                vertex2 = 1.*vertex
                vertex = 1.*prev_vertex
            if not np.allclose(vertex0, vertex2):
                ax.plot([fund_x*(vertex0[0]), fund_x*(vertex2[0])],
                    [fund_y*(vertex0[1]), fund_y*(vertex2[1])],
                    [fund_z*(vertex0[2]), fund_z*(vertex2[2])], '--', color="red")
            prev_vertex = 1.*vertex2
        ax.xaxis.set_major_formatter(plt.NullFormatter())
        ax.yaxis.set_major_formatter(plt.NullFormatter())
        ax.zaxis.set_major_formatter(plt.NullFormatter())
        fig.savefig("../doc/" + sys.argv[1] + "-face-" + str(i) + ".pdf")
        plt.close()
    # fig.savefig("../doc/" + sys.argv[1] + "-faces.pdf")
    # plt.close()
