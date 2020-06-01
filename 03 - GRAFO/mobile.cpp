#include <bits/stdc++.h>
#define DEBUG(x) cout << "DEBUG: " << x << endl
#define endl "\n"

using namespace std;

int n;
<<<<<<< HEAD
int base = -1;

vector<int> adj[1000010];
int dist[1000010];

queue<int> q;

void bfs(int x){
    dist[x] = 0;

    q.push(x);
    while(!q.empty()){
        int s = q.front(); q.pop();
        for(auto u : adj[s]){
            if(dist[u] != -1) continue;    

            dist[u] = dist[s] + 1;
            q.push(u);
        }
    }
}
=======
vector<int> adj[100010];
>>>>>>> afc13f40e1a95d24b1b5f31e93f0b78c4736d2da

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    
    for(int i = 0; i <= n; i++){
        dist[i] = -1;
    }

    int u,v;
    for(int i = 0; i < n; i++){
        cin >> u >> v;
        adj[v].push_back(u);
    }

     

    for(int i = 1; i <= n; i++){
        if(adj[i].size() != 0) continue;

        if(base == 0){
            base = dist[i];
        }

        if(base != dist[i]){
            cout << "mal" << endl;
            return 0;
        }

    }

    cout << "bem" << endl;

    return 0;
}