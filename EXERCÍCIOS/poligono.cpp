#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n,ans,p[1000010],sum;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    ans = n;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        sum += p[i];
    }

    sort(p,p+n,greater<int>());

    for(int i = 0; i < n; i++){
        if(p[i] >= sum - p[i]){
            ans--;
            sum -= p[i];
        }
    }

    cout << (ans < 3 ? 0 : ans) << endl;
    

    return 0;
}