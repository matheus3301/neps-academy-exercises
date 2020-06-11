#include <bits/stdc++.h>
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

#define p second
#define r first

using namespace std;

typedef long long ll;
typedef pair<int,int> caixa;


int n;
caixa caixas[1010];
int memo[1010];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    int a, b;

    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        caixas[i] = make_pair(b,a);
        memo[i] = 2e31;
    }

    sort(caixas+1,caixas+1+n);

    for(int i = 1; i <= n; i++){
        for(int k = n; k >= 0; k--){
            if(memo[])
        }
    }

    return 0;
}