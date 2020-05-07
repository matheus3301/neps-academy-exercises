#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int N[110];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    int tmp;
    for(int i = 0; i < m; i++){
        cin >> tmp;
        N[tmp]++;
    }

    int ans = 0;
    for(int i = 1; i <= n; i++ ){
        if(N[i] == 0){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}