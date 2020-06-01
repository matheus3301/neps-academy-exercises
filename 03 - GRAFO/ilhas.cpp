#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n,m,s,maior = -2e31, menor = 2e31;

vector<pair<int,int> > adj[1010];
int dist[1010];
bool visited[1010];

priority_queue<pair<int,int>> q;

void dij(int x){

    for(int i = 1; i <= n; i++)
        dist[i] = 2e31;

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
                q.push({-dist[b], b});
            }

        }

    }

    
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

    cin >> s;
    dij(s);

    for(int i = 1; i <= n; i++){
        if(i == s) continue;
        if(dist[i] > maior) maior = dist[i];
        if(dist[i] < menor) menor = dist[i];

    }

    cout << maior - menor << endl;   

    return 0;
}