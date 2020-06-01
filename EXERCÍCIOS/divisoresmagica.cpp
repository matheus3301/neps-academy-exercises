#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int a, b, c ,d;

bool calcula(int n){
        if(c % n == 0){
            if(n % a == 0 && n % b != 0 && d % n != 0 ) return true;
        }

    return false;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> a >> b >> c >> d;

    int n = INT32_MAX;

    for(int i = 1; i < sqrt(c); i++){
       if(c%i == 0){
           if(calcula(i)){
               n = min(n, i);
           }
           if(calcula((int)c/i)){
               n = min(n, (int)c/i);
           }
       }
    }

    if(n == INT32_MAX){
        cout << -1 << endl;
    }else{
        cout << n << endl;
    }

    return 0;
}