#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define KUNG 1
#define LU 9

int v[20];

int busca(int val, int inicio, int fim){
    if(inicio <= fim){
        int meio = inicio + (fim - inicio)/2;

        if(v[meio] == val){
            return meio;
        }

        if(v[meio] > val){
            return busca(val,inicio, meio-1);
        }

        return busca(val, meio+1, fim);
    }
    
    return -1;
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1; i <= 16; i++){
        cin >> v[i];
    }
    
    int kung = busca(KUNG,1,16);
    int lu = busca(LU,1,16);

    int distancia = abs(lu-kung);
    if(distancia == 1){

    }

    return 0;
}