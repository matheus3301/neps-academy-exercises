#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = -1;
    
    int ans = 0;

    while(n != 2018){
        cin >> n;
        ans++;
    }

    cout << ans-1 << endl;

    

    return 0;
}