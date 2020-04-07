#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l;
    cin >> l;
    int res = 1;

    while(l >= 2){
        res *= 4;
        l /= 2;
    }
    
    cout << res << endl;
    return 0;
}