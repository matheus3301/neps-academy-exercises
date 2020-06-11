#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

const int mxN = 1010;

set<int> troco;

int n,m;
int v[mxN];
int memo[mxN][mxN];

int solve(int i, int resta){
    troco.insert(resta);

    int &pdm = memo[i][resta];
    
    if(pdm != -1 ) return pdm;
    
    if(i == n) return pdm =  0;
    if(resta == 0) return pdm = 1;
    if(resta < 0) return -2e31;

    return pdm = max(solve(i,resta-v[i]),solve(i+1, resta));

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    int ans = 0;
    solve(0,m);
    cout << troco.size() + 1 << endl;

    return 0;
}