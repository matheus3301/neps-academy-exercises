#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

const int mxN = 1010;

int pai[mxN];

int n, c;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    memset(pai,-1,sizeof(pai));

    cin >> n >> c;
    int p, ninf, inf;
    
    for(int i = 0; i < c; i++){
        cin >> p >> ninf;
        for(int j = 0; j < ninf; j++){
            cin >> inf;
            pai[inf] = p;        
        }
    }

    for(int i = 1; i <= n; i++){
        if(pai[i] == -1){
            cout << i << endl;
        }
    }

    

    return 0;
}