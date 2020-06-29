#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;


int n;

int a, b, c, d;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> a >> b >> c >> d;

    int pa = 0;
    int pb = 0;

    if(a == b + 1 || b == a + 1){
        pa = 3*(a+b);
    }else if(a == b){
        pa = 2*(a+b);
    }else{
        pa = a + b;
    }


    if(c == d + 1 || d == c + 1){
        pb = 3*(d+c);
    }else if(c == d){
        pb = 2*(c+d);
    }else{
        pb = c + d;
    }
    

    if(pa == pb){
        cout << "empate" << endl;
    }else if(pa > pb){
        cout << "Lia" << endl;
    }else{
        cout << "Carolina" << endl;
    }
    

    return 0;
}