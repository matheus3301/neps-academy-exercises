#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n,a, b, c, d, e, f ,g ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> a >>  b >>  c >>  d >>  e >>  f  >> g ;

    int ans = a-d-e + b-d-f + c-e-f + d + e + f + g;

    if(n != ans){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    
    return 0;
}