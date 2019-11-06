#include <iostream>

using namespace std;

int main(){
    int n;
    
    cin >> n;

    int anterior;
    cin >> anterior;

    int pontos = 1;
    int absoluto = 1;

    for(int i = 1; i < n;i++){
        int val;
        cin >> val;
        if(val == anterior){
            pontos++;
        }else{
            pontos = 1;
        }

        if(pontos > absoluto){
            absoluto = pontos;
        }
        anterior = val;
    }

    cout << absoluto << "\n";

    return 0;
}