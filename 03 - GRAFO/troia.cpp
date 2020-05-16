#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<long long> adj[500010];
bool visited[500010];

void dfs(long long x){
    visited[x] = true;
    for(long long v : adj[x]){
        if(visited[v]) continue;
        dfs(v);               
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, m;
    cin >> n >> m;

    long long a, b;

    int ans = 0;

    for(long long i = 0; i < m; i++){
        cin >>a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ans++;
            dfs(i);
        }
    }
    
    cout << ans << endl;
    return 0;
}