#include<bits/stdc++.h>
using namespace std;

const int MAX_VERTICES = 100;

list<int> graph[MAX_VERTICES];
bool visited[MAX_VERTICES];

void dfsRecursive(int currentVertex)
{
    cout << currentVertex << " ";
    visited[currentVertex] = true;

    for ( auto &it : graph[currentVertex])
    {
        if (!visited[it])
        { 
            dfsRecursive(it);
        }
    }
}

int main()
{
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    cout << "Enter the number of edges: ";
    cin >> edges;

    // Input edges for an undirected graph
    cout << "Enter edges (format: vertex1 vertex2):" << endl;
    for (int i = 0; i < edges; ++i)
    {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;
        graph[vertex1].push_back(vertex2);
        graph[vertex2].push_back(vertex1); // For undirected graph, add both vertices
    }

    // Initialize visited array
    fill(visited, visited + MAX_VERTICES, false);

    // DFS starting from vertex 0 using recursion
    cout << "DFS traversal starting from vertex 0: ";
    dfsRecursive(0);
    cout << endl;

    return 0;
}
