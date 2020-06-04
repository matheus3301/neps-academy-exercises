#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"

using namespace std;

typedef long long ll;

int n;
int k[100010];

int ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    REP(i,0,n) cin >> k[i];

    for(int i = 0; i < n; i++){
        int tmp;
        if(k[i] > 0){
            for(int j = i; j < n; j++){
                if(k[j] > 0){
                    tmp = j-i;
                }
            }
        }
        
        ans = max(ans,tmp);
    }
    
    cout << ans << endl;

    return 0;
}