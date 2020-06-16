#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

typedef long long ll;

const int INF = 2e31;

int n, m, c, k;


vector<pair<int,int >> adj[260];

int dist[260];
bool visited[260];
priority_queue<pair<int,int> >  q;

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

            if(a < c && b != a + 1) continue;

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
    
    cin >> n >> m >> c >> k;
    while(n != 0 && m != 0 && c != 0 && k != 0){

        int u, v, p;
        for(int i = 0; i < m; i++){
            cin >> u >> v >> p;
            adj[u].push_back({v,p});
            adj[v].push_back({u,p});

        }

        dij(k);
        cout << dist[--c] << endl;

        cin >> n >> m >> c >> k;

        for(int i = 0; i <= n; i++){
            adj[i].clear();
            visited[i] = false;
        }
    }
    

    return 0;
}