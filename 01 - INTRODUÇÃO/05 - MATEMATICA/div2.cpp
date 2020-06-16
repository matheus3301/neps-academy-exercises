#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int charToInt(char a){
    return a - '0';
}

int resto(string s, int d){
    int base = 1%d;
    int res = 0;
    for(int i = s.size()-1; i >= 0; i--){
        res = (res + (charToInt(s[i]) * 1LL * base)%d)%d;
        base = (base*10) % d;
    }
    return res;
}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if(resto(s,4) == 0 )
        cout << "S" << endl;
    else
        cout << "N" << endl;
    
    
    
    if(resto(s,9) == 0 )
        cout << "S" << endl;
    else
        cout << "N" << endl;

    if(resto(s,25) == 0 )
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}