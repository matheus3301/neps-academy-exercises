#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"

using namespace std;

typedef long long ll;

int n,m;
int n2;

int s1[1000010];
int s2[1000010];

int memo[1000010][1000010];

int lcs(int i,int j){
    if (i == 0 || j == 0) return 0;
    
    if(s1[i] == s2[j]) return 1 + lcs(i-1,j-1);

    return max(lcs(i-1,j), lcs(i,j-1));

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> s1[i];

    for(int i = 1; i <= m; i++)
        cin >> s2[i];

    cout << lcs(n,m) << endl;

    return 0;
}