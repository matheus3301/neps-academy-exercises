#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int charToInt(char a){
    return a - '0';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b,c;
    cin >> a >> b >> c;
    int res = 0;
    if(charToInt(a.back())%2 == 0 || a.back() == '5'){
        res++;
    }
    if(charToInt(b.back())%2 == 0 || b.back() == '5'){
        res++;
    }
    if(charToInt(c.back())%2 == 0 || c.back() == '5'){
        res++;
    }
    cout << res << endl;
    return 0;
}