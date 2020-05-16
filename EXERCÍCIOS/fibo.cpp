#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int fibo(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;

    return fibo(n-1) + fibo(n-2); 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << fibo(i) << " ";
    }
    cout << endl;

    return 0;
}