#include <iostream>

using namespace std;

//se o numero de latas for maior que o de copos, os copos vao cair e quebrar
//O objetivo é contar quantos copos quebraram durante N entregas 



int main(){
    int n;
    int i = 0;

    int total = 0;

    cin >> n;

    while(i < n){
        int lata;
        int copo;

        cin >> lata >> copo;

        if(lata > copo){
            total += copo;
            
        }    

        i++;
    }

    cout << total << "\n";


    return 0;
}