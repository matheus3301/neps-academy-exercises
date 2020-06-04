#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"

using namespace std;

typedef long long ll;

const int mxN = 1010;
const int INF = 2e31;

int n,m;

vector<pair<int,int>> adj[mxN];
int dist[mxN];
bool visited[mxN];
priority_queue<pair<int,int>> q;

void dij(int x){
    for(int i = 0; i <= n+1; i++){
        dist[i] = INF;
    }

    dist[x] = 0;
    q.push({0,x});

    while(!q.empty()){
        int a = q.top().second; q.pop();

        if(visited[a]) continue;
        visited[a] = true;

        for(auto u : adj[a]){
            int b = u.first, w = u.second;

            if(dist[a] + w < dist[b]){
                dist[b] = dist[a] + w;
                q.push({-dist[b],b});
            }
        }

    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;

    int u,v,w;
    REP(i,0,m){
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    dij(0);

    cout << dist[n+1] << endl;
    return 0;
}