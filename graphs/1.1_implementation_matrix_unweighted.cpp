#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    int adjacenty[n+1][n+1];

    for (int i = 0; i < n+1; i++)
    {
        for(int j=0; j<n+1; j++){
            adjacenty[i][j]=0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        adjacenty[u][v]=1;
        adjacenty[v][u]=1;
    }

    for (int i = 1; i < n+1; i++)
    {
        for(int j=1; j<n+1; j++){
            cout << adjacenty[i][j] << " ";
        }
        cout << endl;
    }
    
    


    return 0;
}