#include <bits/stdc++.h>

#define endl "\n"

using namespace std;
bool primo(int n);

bool primo(int n){
    int d = 0;
        
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                d++;
            }
        }
        
        if (d == 2){
            return 1;
        }else{
            return 0;
        }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if(primo(n)){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    

    return 0;
}