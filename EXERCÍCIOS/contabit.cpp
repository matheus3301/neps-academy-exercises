#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int conta(long long n){
    int ans = 0;
    while(n > 0){
        n -=  (n & -n);
        ans++;
    }

    return ans;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n; cin >> n;

    cout << conta(n) << endl;

    return 0;
}