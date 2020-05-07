#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int fat(int n){
    if(n <= 1) return 1;
    

    return n*fat(n-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin >> n;

    cout << fat(n) << endl;
    

    return 0;
}