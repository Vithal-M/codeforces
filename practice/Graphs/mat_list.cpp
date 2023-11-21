#include <iostream>
#include <list>
using namespace std;

const int MAX_VERTICES = 100;

int graph[MAX_VERTICES][MAX_VERTICES];
list<int> adjList[MAX_VERTICES];

void matrixToList(int vertices)
{
    for (int i = 0; i < vertices; ++i)
    {
        for (int j = 0; j < vertices; ++j)
        {
            if (graph[i][j] == 1)
            {
                adjList[i].push_back(j);
                adjList[j].push_back(i); // For undirected graph, add both vertices
            }
        }
    }
}

int main()
{
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    // Assume input for the adjacency matrix
    cout << "Enter the adjacency matrix (0 or 1):" << endl;
    for (int i = 0; i < vertices; ++i)
    {
        for (int j = 0; j < vertices; ++j)
        {
            cin >> graph[i][j];
        }
    }

    matrixToList(vertices);

    // Display the adjacency list
    cout << "Adjacency List:" << endl;
    for (int i = 0; i < vertices; ++i)
    {
        cout << "Vertex " << i << ": ";
        for (const auto &neighbor : adjList[i])
        {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
