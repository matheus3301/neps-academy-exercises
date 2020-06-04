#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"

using namespace std;

typedef long long ll;

int n,m,c,k;

vector<pair<int,int>> adj[260];
bool visited[260];
int dist[260];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m >> c >> k;
    while(n != 0 || m != 0 || c != 0 || k != 0){
        for(int i = 0; i <= n; i++){
            visited[i] = false;
            adj[i].clear();

        }

        
        int u,v,p;
        for(int i = 0; i < m; i++){
            cin >> u >> v >> p;
            adj[u].push_back({v,p});
            adj[v].push_back({u,p});
        }

        int ans = min(dist[c-1],ans);

        cout << ans << endl;

        cin >> n >> m >> c >> k;
    }
    

    return 0;
}