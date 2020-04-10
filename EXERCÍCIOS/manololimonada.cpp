#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;
    cin >> n >> c;

    int res = 0;
    for(int i = 0; i < n; i++){
        res += c;

        if(c > 1)c--;
    }

    cout << res << endl;
    return 0;
}