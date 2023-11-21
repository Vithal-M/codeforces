
// ./a.out
// Enter the number of vertices 5
// Enter the number of edges 7
// Enter the edges(format: vertix1 vertex2):
// 0 1
// 0 2
// 1 2
// 1 3
// 2 4
// 3 4
// 4 0
// Adjacent Matrix :
// 0 1 1 0 1 
// 1 0 1 1 0 
// 1 1 0 0 1 
// 0 1 0 0 1 
// 1 0 1 1 0 

#include<bits/stdc++.h>
using namespace std;

const int mat_vertices = 100;
int graph[mat_vertices][mat_vertices];

int main(){
    int vertices, edges;
    cout << "Enter the number of vertices";
    cin >> vertices;

    cout << "Enter the number of edges";
    cin >> edges;

    for (int i = 0; i < mat_vertices; i++){
        for (int j = 0; j < mat_vertices; j++){
            graph[i][j] = 0;
        }
    }
    cout << "Enter the edges(format: vertix1 vertex2):" << endl;
    for (int i = 0; i < edges; i++){
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;
        graph[vertex1][vertex2] = 1;
        graph[vertex2][vertex1] = 1;
    }
    cout << "Adjacent Matrix :" << endl;
    for (int i = 0; i < vertices;i++){
        for (int j = 0; j < vertices; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}