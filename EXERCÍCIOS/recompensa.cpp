#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define endl "\n"

using namespace std;

typedef long long ll;

int n;
ll p[100010], ans,k;

void solve(int i = 1, ll pontos = 0, ll gasto = 0){
    if(i == n){
        if(pontos >= k){
            ans = min(ans, gasto);
        }else{
            ans = min(ans, gasto + p[i]);
        }

        return;
    }

    if(pontos >= k){
        solve(i+1,pontos - k, gasto);
    } 

    solve(i+1,pontos + 1LL, gasto + p[i]);
    
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k;
    REP(i,1,n+1){
        cin >> p[i];
        ans += p[i];
    }   
    solve();
    cout << ans << endl;

    return 0;
}