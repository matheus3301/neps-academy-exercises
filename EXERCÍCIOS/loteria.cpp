#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int aposta[6];
    int gabarito[6];

    int pontos = 0;

    for(int i = 0; i < 6; i++){
        cin >> aposta[i];
    }
    
    
    for(int i = 0; i < 6; i++){
        cin >> gabarito[i];
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(aposta[i] == gabarito[j]) pontos++;
        }
    }
    
    if(pontos == 3){
        cout << "terno" << endl;
    }else if(pontos == 4){
        cout << "quadra" << endl;
    }else if(pontos == 5){
        cout << "quina" << endl;
    }else if(pontos == 6){
        cout << "sena" << endl;
    }else{
        cout << "azar" << endl;
    }
    
    return 0;
}