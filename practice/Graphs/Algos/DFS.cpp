// 0 -- -1 -- -3
//  \ /
//     2 -- -4

// Enter the number of vertices: 5
// Enter the number of edges: 6
// Enter edges (format: vertex1 vertex2):
// 0 1
// 0 2
// 1 2
// 1 3
// 2 4
// 3 4

#include<bits/stdc++.h>
    using namespace std;

const int MAX_VERTICES = 100;

list<int> graph[MAX_VERTICES];

void dfs(int startVertex, bool visited[])
{
    stack<int> s;
    s.push(startVertex);
    visited[startVertex] = true;

    while (!s.empty())
    {
        int curr = s.top();
        s.pop();
        cout << curr << " ";

        for ( auto &it : graph[curr])
        {
            if (!visited[it])
            {
                visited[it] = true;
                s.push(it);
            }
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

    cout << "Enter edges (format: vertex1 vertex2):" << endl;
    for (int i = 0; i < edges; ++i)
    {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;
        graph[vertex1].push_back(vertex2);
        graph[vertex2].push_back(vertex1); // For undirected graph, add both vertices
    }

    // Initialize visited array
    bool visited[MAX_VERTICES];
    fill(visited, visited + MAX_VERTICES, false);

    // DFS starting from vertex 0
    cout << "DFS traversal starting from vertex 0: ";
    dfs(0, visited);
    cout << endl;

    return 0;
}
