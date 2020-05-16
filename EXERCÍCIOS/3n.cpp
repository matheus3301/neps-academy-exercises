#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int f(int n){
    if(n%2 == 0){
        return n/2;
    }else{
        return 3*n+1;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int i = 0;

    while(n > 1){
        n = f(n);
        i++;
    }

    cout << i << endl;

    return 0;
}