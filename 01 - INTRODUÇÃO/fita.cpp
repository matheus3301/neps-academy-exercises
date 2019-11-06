#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    int fita[n];

    for(int i = 0; i < n; i++){
        int val;
        cin >> val;

        fita[i] = val;
    }

    for(int i = 0; i < n;i++){
       //contar pra direita
       int direita =n;
       for(int j =i;j<n;j++){
           if(fita[j] == 0){
               direita = j - i;
               break;
           }
       }

        int esquerda =n;
       for(int j = i; j >=0;j--){
           if(fita[j] == 0){
               esquerda = i - j;
               break;
           }
       }
        
        if(min(esquerda,direita) > 9){
            fita[i] = 9;
        }else{
            fita[i] = min(esquerda,direita);

        }
        
    }



    for(int i = 0; i < n; i++){
        cout << fita[i] << " ";
    }

    cout << "\n";

    return 0;
}