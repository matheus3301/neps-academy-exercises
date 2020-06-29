#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b , c;
    cin >> a >> b >> c;

    if(a > b + c || c > a + b || b > a + c){
        cout << "N" << endl;
        return 0;
    }

    cout << "S" << endl;
    if(a == b && a == c){
        cout << 3 << endl;
    }else if(a != b && a != c && b != c){
        cout << 2 << endl;
    }else{
        cout << 1 << endl;
    }
    

    return 0;
}