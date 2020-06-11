#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

vector<int> adj[100010];

int n;
bool mal;

int dfs(int x){
    int depth = 1;
    int qtd_filho = -1;

    for(auto v : adj[x]){
        int filho = dfs(v);

        depth += filho;

        if(qtd_filho == -1){
            qtd_filho = filho;
        }else{
            if(filho != qtd_filho){
                mal = true;
            }
        }
    }

    return depth;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    int u, v;
    for(int i = 0; i < n; i++){
        cin >> u >> v;
        adj[v].push_back(u);
    }

    dfs(0);

    if(mal){
        cout << "mal" << endl;
    }else{
        cout << "bem" << endl;
    }

    return 0;
}