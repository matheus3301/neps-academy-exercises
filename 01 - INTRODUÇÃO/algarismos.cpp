//EXERCÍCIO NEPS ACADEMY
//Autor: Matheus Rocha
//Nome do Exercício: Contagem de Algarismos
//Id do Exercício: 189


#include <iostream>

using namespace std;

int main(){
    int algarismo[10];

    for(int i = 0; i < 10;i++){
        algarismo[i] = 0;
    }

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        string numero;
        
        cin >> numero;

        for(int j = 0; j < numero.size(); j++){
            switch (numero[j])
            {
            case '0':
                algarismo[0]++;
                break;
            case '1':
                algarismo[1]++;
                break;
            case '2':
                algarismo[2]++;
                break;
            case '3':
                algarismo[3]++;
                break;
            case '4':
                algarismo[4]++;
                break;
            case '5':
                algarismo[5]++;
                break;
            case '6':
                algarismo[6]++;
                break;
            case '7':
                algarismo[7]++;
                break;
            case '8':
                algarismo[8]++;
                break;
            case '9':
                algarismo[9]++;
                break;            
            default:
                break;
            }
        }
    }


    for(int i = 0; i < 10; i++){
        cout << i << " - "<<algarismo[i]<<"\n";
    }

    return 0;
}