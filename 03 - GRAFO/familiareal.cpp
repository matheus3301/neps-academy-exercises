#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

int n,m;

vector<int> adj[10010];
bool presente[100010];
double geracao_total[100010];
double geracao_presente[100010];

int geracao[100010];
queue<int> q;

void bfs(int x){
    for(int i = 0; i <= n; i++)
        geracao[i] = -1;

    geracao[x] = 0;
    q.push(x);

    while(q.size()){
        int a = q.front(); q.pop();

        geracao_total[geracao[a]]++;
        if(presente[a])
            geracao_presente[geracao[a]]++;


        for(auto v : adj[a]){
            if(geracao[v] != -1) continue;
            
            geracao[v] = geracao[a] + 1;        

            q.push(v);
        }
    }


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    int tmp;
    for(int i = 1 ; i <= n; i++){
        cin >> tmp;
        adj[tmp].push_back(i);
    }

    for(int i = 0; i < m; i++){
        cin >> tmp;
        presente[tmp] = true;
    }
    
    bfs(0);

    // for(int i = 0; i <= n; i++){
    //     cout << i << " : ";
    //     for(auto v : adj[i]){
    //         cout << v << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i = 0; i < n; i++){
    //     cout << geracao[i] << " ";
    // }
    // cout << endl;

    cout.precision(2);
    cout.setf(ios::fixed);

    double ans;

    for(int i = 1; i <= n; i++){
        if(!geracao_total[i]) break;

        ans = geracao_presente[i]/geracao_total[i] * 100.;    

        cout << ans << " ";
    }
    
    cout << endl;

    return 0;
}