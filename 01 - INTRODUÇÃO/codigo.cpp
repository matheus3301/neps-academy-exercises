#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int val[n];

    for(int i = 0; i < n; i++){
        cin>>val[i];
    }

    int cent = 0;
    int dez = 0;
    int unid = 0;

    int contador = 0;
    for(int i = 0; i < n; i++){
        cent = dez;
        dez = unid;
        unid = val[i];

        if(cent == 1 && dez == 0 && unid == 0){
            contador++;
        }

    }

    cout << contador <<"\n";

    return 0;
}