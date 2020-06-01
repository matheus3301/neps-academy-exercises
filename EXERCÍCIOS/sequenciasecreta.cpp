#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n;
int ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int prev = 0, tmp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(tmp != prev){
            ans++;
            prev = tmp;
        } 
    }
    
    cout << ans << endl;

    return 0;
}