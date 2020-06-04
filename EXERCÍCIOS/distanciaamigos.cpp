#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n;
int a[200010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            ans = max(ans, j-i + a[i] + a[j]);
        }
    }

        
    cout << ans << endl;

    return 0;
}