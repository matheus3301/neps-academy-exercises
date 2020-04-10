#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n, k;
long long m;

long long a[10010];
long long dp[10010];
long long soma = 0;


long long sigma(int val){
    long long res = 0;
    for(int i = 1; i <= n; i++){
        res += a[i];
    }
    cout << "A["<<val<<"]"<<" = "<<res<<endl;
    return res;
}

long long f(long long val){
    if(dp[val] != -1) return dp[val];

    dp[val] = (soma*f(val-1))%m;
    return dp[val];

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp,-1,sizeof(dp));

    

    cin >> n >> k >> m;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        soma += a[i];
    }

    cout << "Soma" << soma << endl;
    for(int i = 1; i <= n; i++){
        cin >> dp[i];
    }

    cout << f(k) << endl;

    

    return 0;
}