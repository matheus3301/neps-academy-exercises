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
=======
<<<<<<< HEAD:05 - MATEMATICA/palitos.cpp
int N,M;
long long ans;
=======
const int mxN = (unsigned int)1e5 + 1;

int n;
>>>>>>> 1a6b2722004b660678096ab0c02f611ee1048840:EXERCÍCIOS/recompensa.cpp
>>>>>>> 1a6b2722004b660678096ab0c02f611ee1048840

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
<<<<<<< HEAD
    
    cin >> n >> k;
    REP(i,1,n+1){
        cin >> p[i];
        ans += p[i];
    }   
    solve();
    cout << ans << endl;

=======

    cin >> N >> M;
    
    for(int i = 1 ; i <= M; i++){
        ans += max(0,min(M,N-i-1)-max(1,N-i-M)+1);
    }
    
    cout << ans << endl;
>>>>>>> 1a6b2722004b660678096ab0c02f611ee1048840
    return 0;
}