#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int andar[3];
    for(int i = 0; i < 3; i++){
        cin >> andar[i];
        
    }

    int maior = 0;
    if(andar[1] >= andar[0] && andar[1] >= andar[2]){
        maior=1;
    }else{
        if(andar[2] > andar[0]){
            maior=2;
        }
    }

    int mins = 0;
    for(int i = 0; i < 3; i++){
        if(i>maior){
            mins += (i-maior)*andar[i]*2;
        }else{
            mins += (maior-i)*andar[i]*2;

        }
    }

    cout << mins << endl;

    return 0;
}