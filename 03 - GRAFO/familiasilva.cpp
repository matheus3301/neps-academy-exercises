#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n,m,s;

vector<pair<int,int> > adj[1010];
int dist[1010];
bool visited[1010];

priority_queue<pair<int,int>> q;

int prim(int x){

    int ans = 0;

    for(int i = 0; i < n; i++)
        dist[i] = 2e31;

    dist[x] = 0;

    q.push({0,x});
    while(!q.empty()){
        int a = q.top().second; q.pop();
        
        if(visited[a]) continue;
        visited[a] = true;

        for(auto u : adj[a]){
            int b = u.first, w = u.second;

            if(w < dist[b] && !visited[b]){
                dist[b] = w;
                q.push({-dist[b], b});
            }

        }

    }

    for(int i = 0; i < n; i++){
         ans += dist[i];

    }

    return ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;

    int u,v,p;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> p;
        
        adj[u].push_back({v,p});
        adj[v].push_back({u,p});
        
    }

    cout << prim(0) << endl;

   

    return 0;
}