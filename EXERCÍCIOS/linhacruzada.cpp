#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n,ans;
vector<int> a,b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        a.push_back(tmp);
        b.push_back(tmp);
    }

    sort(a.begin(),a.end());

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]) ans++;
    }
    

    cout << ans << endl;
    return 0;
}