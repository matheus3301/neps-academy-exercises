#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"

using namespace std;

typedef long long ll;

int memo[1010][1010];
int v[1010];

int n,m;

int solve(int i, int valor, int num){
    int &pdm = memo[i][valor];

    if(pdm != -1) return pdm;
    

    if(valor == 0) return num;
    if(i == n) return 2e31;


    if(v[i] <= valor)
        return pdm = min(solve(i,valor - v[i],num+1) , solve(i+1,valor,num));   

    return pdm = solve(i+1,valor,num);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(memo,-1,sizeof(memo));
    
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v,v+n);

    cout << (solve(0,m,0) < 10 ? "S" : "N") << endl;    

    return 0;
}