#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

string dtb(int n){
    string s;

    if(n == 0){
        return "0";
    }

    while(n >= 2){
        int resto = n%2;
        n /= 2;

        char r = resto + 48;

        s = r + s;
    }

    s = '1' + s;
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    string ans = dtb(n);
    cout << ans << endl;
    return 0;
}