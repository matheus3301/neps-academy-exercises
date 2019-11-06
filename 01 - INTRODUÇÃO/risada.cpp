#include <iostream>

using namespace std;

int main(){

    string risada;

    cin >> risada;

    string vogais = "";

    for(int i = 0; i < risada.size();i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] =='u'){
            vogais += risada[i];
        }
    }

    string contrario = "";
    for(int i = vogais.size()-1;i >= 0;i--){
        contrario+=vogais[i];
    }

    for(int i = 0; i < vogais.size();i++){
        if(contrario[i] != vogais[i]){
            cout << "N\n";
            return 0;
        }
    }

    cout << "S" << "\n";  
    
    

    return 0;
}