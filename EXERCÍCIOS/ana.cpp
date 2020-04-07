#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;
    int d = a - b - c;
    if(d >= b && d >= c){
        cout << d << endl;
        return 0;
    }else if(c >= d && c >= b){
        cout << c << endl;
        return 0;
    }else{
        cout << b << endl;
    }
    

    return 0;
}