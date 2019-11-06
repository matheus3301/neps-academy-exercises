#include <iostream>

using namespace std;

int main(){
    int n,operacoes;

    cin >> n >> operacoes;

    int banco[n];
    for(int i = 0; i < n;i++){
        cin >> banco[i];
    }

    for(int i = 0; i < operacoes; i++){
        int devedor,credor,valor;
        cin >> devedor >> credor >> valor;

        banco[devedor-1] -=valor;
        banco[credor-1] +=valor;

    }

    char ok = 'S';

    for(int i = 0; i < n; i++){
        if(banco[i] < 0){
            ok = 'N';
        }
    }

    cout << ok <<"\n";
    

}