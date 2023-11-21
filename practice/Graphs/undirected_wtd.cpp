#include <iostream>
#include <list>
#include <utility> // For std::pair
using namespace std;

const int MAX_VERTICES = 100;

list<pair<int, int>> graph[MAX_VERTICES]; // Pair represents (neighbor, weight)

int main()
{
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    cout << "Enter the number of edges: ";
    cin >> edges;

    // Input edges and weights for an undirected weighted graph
    cout << "Enter edges and weights (format: vertex1 vertex2 weight):" << endl;
    for (int i = 0; i < edges; ++i)
    {
        int vertex1, vertex2, weight;
        cin >> vertex1 >> vertex2 >> weight;
        graph[vertex1].push_back({vertex2, weight});
        graph[vertex2].push_back({vertex1, weight}); // For undirected graph, add both vertices
    }

    // Display the adjacency list for an undirected weighted graph
    cout << "Adjacency List (Undirected Weighted):" << endl;
    for (int i = 0; i < vertices; ++i)
    {
        cout << "Vertex " << i << ": ";
        for (const auto &neighbor : graph[i])
        {
            cout << "(" << neighbor.first << ", " << neighbor.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
