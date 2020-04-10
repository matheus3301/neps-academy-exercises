#include <iostream>

using namespace std;

int main(){
    long long g[3][3];
    long long maior = INT64_MIN;

    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++){
        cin >> g[i][j];        
        if(g[i][j] > maior){
            maior = g[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(g[i][j] == maior) g[i][j] = -1;

            cout << g[i][j] << " ";
        }
        cout << endl;

    }
    

    return 0;
}