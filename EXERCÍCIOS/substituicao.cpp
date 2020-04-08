#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int vet[10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int menor = 101;
    for(int i = 0; i < 10; i++){
        cin >> vet[i];
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    
    cout << "Menor: "<< menor << endl;
    cout << "Ocorrencias: ";
    for(int i = 0; i < 10; i++){
        if(vet[i] == menor){
            cout << i << " ";
            vet[i] = -1;
        }
    }
    cout << endl;
    
    for(int i = 0; i < 10; i++){
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
}