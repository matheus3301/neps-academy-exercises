#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

bool primo(long long n){
    if(n == 1) return false;
    for(long long i = 2; i < sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    if(primo(n)){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;

    }
    

    return 0;
}