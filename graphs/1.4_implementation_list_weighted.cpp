#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    // n ======= no of vertices
    // m ======= no of edges

    vector< pair<int, int> > adj[n+1];

    for (int i = 0; i < m; i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    return 0;


    return 0;
}