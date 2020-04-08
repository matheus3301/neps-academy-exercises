#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int vet[10];

int main(){
    for(int i = 0; i < 10; i++){
        cin >> vet[i];
    }

    sort(vet,vet+10);

    for(int i = 0; i < 10; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
    
    for(int i = 9; i >= 0; i--){
        cout << vet[i] << " ";
    }
    cout << endl;
    
}