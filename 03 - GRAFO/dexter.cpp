#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

const int mxN = 1e5 + 1;
const int INF = 2e31;

int n,m,ini,dest;

vector<pair<int,int>> adj[mxN];

bool visited[mxN];
int dist[mxN];
int pai[mxN];
priority_queue<pair<int,int>> q;


void dij(int x){
    for(int i = 0; i <= n+1; i++){
        dist[i] = INF;
        pai[i] = -1;
    }

    dist[x] = 0;
    pai[x] = x;
    q.push({0,x});

    while(!q.empty()){
        int a = q.top().second; q.pop();

        if(visited[a]) continue;
        visited[a] = true;

        for(auto u : adj[a]){
            int b = u.first, w = u.second;

            if(a < dest && b != a + 1) continue;

            if(dist[a] + w < dist[b]){
                dist[b] = dist[a] + w;
                pai[b] = a;
                q.push({-dist[b],b});
            }
        }

    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m >> ini >> dest;

    int u, v, d;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> d;
        adj[u].push_back({v,d});
        adj[v].push_back({u,d});
    }

    dij(ini);

    cout << dist[dest] << endl;
    vector<int> caminho;
    caminho.push_back(dest);
    int i = dest;
    while(pai[i] != i){
        caminho.push_back(pai[i]);
        i = pai[i];
    }

    reverse(caminho.begin(),caminho.end());

    for(int j = 0; j < caminho.size(); j++){
        cout << caminho[j] <<  " ";
    }
    cout << endl;
    return 0;
}