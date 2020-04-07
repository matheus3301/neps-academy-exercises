#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    int res = 0;
    while(a >= 2 && b >= 3 && c >= 5){
        
            a -= 2;
            b -= 3;
            c -= 5;

            res++;

        
    }
    
    cout << res << endl;

    return 0;
}