#include <iostream>

using namespace std;

int main(){
    int dias;
    int soma = 0;
    int diadomilhao = 0;
    
    cin >> dias;

    int i = 1;    
    while(i <= dias){
        int view;
        cin >> view;

        soma += view;
        if(soma >= 1000000 && diadomilhao == 0){
            diadomilhao = i;
        }

        i++;
    }

    cout << diadomilhao << "\n";


    return 0;
}