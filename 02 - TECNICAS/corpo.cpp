#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int n, s;

int memo[2020][2020];

int peso[2020], valor[2020];

int pd(int i, int resta){
    
    if(resta < 0) return -1000000;
    if(i == n) return 0;
    
    int &pdm = memo[i][resta];

    if(pdm != -1) return pdm;

    return pdm = max(pd(i+1,resta),pd(i+1,resta-peso[i]) + valor[i]);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> s >> n;
    for(int i = 0; i < n;i++)
        cin >> peso[i] >> valor[i];

    memset(memo,-1,sizeof(memo));

    cout << pd(0,s) << endl;

    return 0;
}