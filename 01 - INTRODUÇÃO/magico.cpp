//EXERCÍCIO NEPS ACADEMY
//Autor: Matheus Rocha
//Nome do Exercício: Quadrado Mágico ou Quadrado Mágico(OBI 2017)
//Id do Exercício: 537 ou 236

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int quadrado[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> quadrado[i][j];
        }
    }

    int prev = 0;

    for(int i = 0; i < n; i++){
        prev+= quadrado[i][i];
    }

    int diag = 0;
    int cont = 0;
    for(int i = n-1; i >= 0; i--){
        diag += quadrado[i][cont];
        cont++;
    }
    if(diag != prev){
        cout << -1 << "\n";
        return 0;
    }
    


    //calcular colunas
    for(int i = 0; i < n; i++){
        int atual = 0;
        for(int j = 0; j < n; j++){
            atual += quadrado[i][j];
        }
        if(atual != prev){
            cout << -1 << "\n";
            return 0;
        }
    }


    //calcular linhas
    for(int i = 0; i < n; i++){
        int atual = 0;
        for(int j = 0; j < n; j++){
            atual += quadrado[j][i];
        }
        if(atual != prev){
            cout << -1 << "\n";
            return 0;
        }
    }


    cout << prev << "\n";
    
    return 0;
}