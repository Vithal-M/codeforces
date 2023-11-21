#include <iostream>
#include <list>
using namespace std;

const int MAX_VERTICES = 100;

list<int> adjList[MAX_VERTICES];
int graph[MAX_VERTICES][MAX_VERTICES];

void listToMatrix(int vertices)
{
    for (int i = 0; i < vertices; ++i)
    {
        for (const auto &neighbor : adjList[i])
        {
            graph[i][neighbor] = 1; // Assuming it's an unweighted graph
            graph[neighbor][i] = 1; // For undirected graph, mark both vertices
        }
    }
}

int main()
{
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    // Assume input for the adjacency list
    cout << "Enter the adjacency list (format: vertex neighbors):" << endl;
    for (int i = 0; i < vertices; ++i)
    {
        int numNeighbors;
        cin >> numNeighbors;
        for (int j = 0; j < numNeighbors; ++j)
        {
            int neighbor;
            cin >> neighbor;
            adjList[i].push_back(neighbor);
        }
    }

    listToMatrix(vertices);

    // Display the adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < vertices; ++i)
    {
        for (int j = 0; j < vertices; ++j)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
