#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int res = 0;
    string s;
    char x;

    cin >> s >> x;
    for(char val : s){
        if(val == x) res++;
    }

    cout << res << endl;
    return 0;  
}