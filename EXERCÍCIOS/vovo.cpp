#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int s, n;
    cin >> n >> s;
    int ans = s;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;

        s += tmp;
        if(s < ans){
            ans = s;
        }
    }

    cout << ans << endl;
    
    return 0;
}