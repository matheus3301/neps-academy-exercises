#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n;
int a[200010];
int ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int melhor = 0;
    for(int i = 1; i < n; i++){
        ans = max(ans,a[melhor] + i - melhor + a[i]);

        if(a[i] > a[melhor] + i - melhor){
            melhor = i;
        }
    }
        
    cout << ans << endl;

    return 0;
}