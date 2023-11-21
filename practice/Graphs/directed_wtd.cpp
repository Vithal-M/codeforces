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

    // Input edges and weights for a directed weighted graph
    cout << "Enter edges and weights (format: source destination weight):" << endl;
    for (int i = 0; i < edges; ++i)
    {
        int source, destination, weight;
        cin >> source >> destination >> weight;
        graph[source].push_back({destination, weight});
        // Do not add the reverse edge for a directed graph
    }

    // Display the adjacency list for a directed weighted graph
    cout << "Adjacency List (Directed Weighted):" << endl;
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
