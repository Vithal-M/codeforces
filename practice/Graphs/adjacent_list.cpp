#include <iostream>
#include <list>
using namespace std;

const int MAX_VERTICES = 100;

list<int> graph[MAX_VERTICES];

int main()
{
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    cout << "Enter the number of edges: ";
    cin >> edges;

    // Input edges
    cout << "Enter edges (format: vertex1 vertex2):" << endl;
    for (int i = 0; i < edges; ++i)
    {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;
        graph[vertex1].push_back(vertex2);
        graph[vertex2].push_back(vertex1); // For undirected graph, add both vertices
    }

    // Display the adjacency list
    cout << "Adjacency List:" << endl;
    for (int i = 0; i < vertices; ++i)
    {
        cout << "Vertex " << i << ": ";
        for (const auto &neighbor : graph[i])
        {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
