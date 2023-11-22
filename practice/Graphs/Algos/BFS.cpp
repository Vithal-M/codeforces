// ./a.out
// enter the number of vertices:  5 
// enter the number of edges: 6
// enter edges(format:vertix1 vertex2):
// 0 1
// 0 2
// 1 2
// 1 3
// 2 4
// 3 4
// bfs traversal starting from vertex 0: 0 1 2 3 4 


#include<bits/stdc++.h>
using namespace std;

const int max_vertices = 100;
list<int> graph[max_vertices];

void bfsofgraph(int start,bool visited[]){
    queue<int> q;
    visited[start] = true;
    q.push(start);
    vector<int> bfs;

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        // bfs.push_back(curr);

        for(auto it : graph[curr]){
            if(!visited[it]){
                visited[it] = true;
                q.push(it);
            }
        }
    }
    // return bfs;
}

int main(){
    int v, e;
    cout << "enter the number of vertices: ";
    cin >> v;
    cout << "enter the number of edges:";
    cin >> e;

    cout << "enter edges(format:vertix1 vertex2):" << endl;
    for (int i = 0; i < e; i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v2);
    }
    bool visited[max_vertices];
    fill(visited, visited + max_vertices, false);

    cout << "bfs traversal starting from vertex 0: ";
    bfsofgraph(0, visited);
    cout << endl;
    return 0;
}