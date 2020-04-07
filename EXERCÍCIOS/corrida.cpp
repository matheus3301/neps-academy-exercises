#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v, n;
    cin >> v >> n;

    for(float i = 1; i <= 9; i++){
        int res = ceil((n*v)*(i/10.0));
        cout << res << " ";
    }

    cout << endl;

    return 0;
}