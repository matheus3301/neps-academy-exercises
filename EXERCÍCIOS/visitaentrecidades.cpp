#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

int a, b, n;

vector<pair<int,int>> adj[10010];

const int INF = 2e31;

bool visited[10010];
int dist[10010];
priority_queue<pair<int,int>> q;

void dij(int x){
    for(int i = 0; i <= n; i++)
        dist[i] = INF;

    dist[x] = 0;

    q.push({0,x});

    while (!q.empty()){
        int a = q.top().second;q.pop();

        if(visited[a]) continue;
        visited[a] = true;

        for(auto u : adj[a]){
            int b = u.first,w=u.second;

            if(dist[b] > dist[a] + w){
                dist[b] = dist[a] + w;
                
                q.push({-dist[b],b});
            }
        }
    }
    

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> a >> b;

    int u,v,w;
    for(int i = 1; i < n; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }

    dij(a);

    cout << dist[b] << endl;

    return 0;
}