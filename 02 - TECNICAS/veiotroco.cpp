#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"

using namespace std;

typedef long long ll;

int memo[1010][1010];
int v[1010];

int n,m;

int solve(int i, int valor){
    if(valor == 0) return 1;
    if(i == n) return 0;

    if(memo[i][valor] != -1) return memo[i][valor];

    if(v[i] <= valor)
        return memo[i][valor] = max(solve(i,valor - v[i]), solve(i+1,valor ));   

    return memo[i][valor] = solve(i+1,valor);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(memo,-1,sizeof(memo));
    
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    cout << (solve(0,m) ? "S" : "N") << endl;    

    return 0;
}