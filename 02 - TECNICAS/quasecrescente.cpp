#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n;

int s1[1010],s2[1010];
int memo[1010][1010];

int lcs(int a, int b){
    if(memo[a][b] >= 0) return memo[a][b];

    if(a == 0 || b == 0) return memo[a][b] = 0;

    if(s1[a] == s2[b]) return 1 + lcs(a-1,b-1);

    return memo[a][b] = max(lcs(a-1,b),lcs(a,b-1));
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(memo,-1,sizeof(memo));

    cin >> n;
    for(int i = 1 ; i <= n; i++){
        cin >> s1[i];
        s2[i] = s1[i];
    }
    
    sort(s2+1,s2+n+1);

    int ans = lcs(n,n);

    cout << ans << endl;


    return 0;
}