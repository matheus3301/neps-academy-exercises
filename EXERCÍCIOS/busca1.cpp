#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int vet[10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 10; i++){
        cin >> vet[i];
    }
    
    int n;
    cin >> n;

    for(int i = 0; i < 10; i++){
        if(vet[i] == n){
            cout << "SIM" << endl;
            return 0;
        }

    }
    
    cout << "NAO" << endl;
    return 0; 
}