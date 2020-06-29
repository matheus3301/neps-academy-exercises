#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

int n,m;

vector<pair<int,int> > adj[110];

const int INF = 2e31;

priority_queue<pair<int,int>> q;
int dist[110];
bool visited[110];

void dij(int x){
    for(int i = 0; i <= n; i++)
        dist[i] = INF;
    
    dist[x] = 0;

    q.push({0,x});

    while(!q.empty()){
        int a = q.top().second; q.pop();

        if(visited[a]) continue;
        visited[a] = true;

        for(auto v : adj[a]){
            int b = v.first, w = v.second;

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
    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }
    
    dij(1);

    cout << dist[n] << endl;

    return 0;
}