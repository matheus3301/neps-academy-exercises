#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n,a[1010], ans = 1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)  
        cin >> a[i];

    for(int i = 2; i < n; i++){
        if(a[i] - a[i-1] != a[i-1] - a[i-2]) ans++;
    }  
    
    cout << ans << endl;

    return 0;
}