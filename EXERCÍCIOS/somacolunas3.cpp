#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int g[3][3];
    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
        cin >> g[i][j];

    for(int i = 0; i < 3; i++){
        int soma = 0;
        for(int j = 0; j < 3; j++){
            soma += g[j][i];
        }
        cout << "Coluna "<< i <<": " << soma << endl;
    }
    

    return 0;
}