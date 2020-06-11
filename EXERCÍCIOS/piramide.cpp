#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n,tmp;
int memo[105][105];
int grid[105][105];

int solve(int l, int c){
    int &pdm = memo[l][c];
    
    if(pdm != -1) return pdm;

    if(l == 1) return pdm = grid[l][c];

    int soma = 0;
    for(int i = 0; i < l; i++){
        soma += grid[l][c+i];
    }

    return pdm = soma + min(solve(l-1,c),solve(l-1,c+1));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(memo,-1,sizeof(memo));
    
    cin >> n;
    for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
        cin >> grid[i][j];
    
    cout << solve(n,1) << endl;    

    return 0;
}