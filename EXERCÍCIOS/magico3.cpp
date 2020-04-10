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

    int base = 0;
    for(int i = 0; i < 3; i++)base += g[i][i];

    int teste = 0;
    for(int i = 0; i < 3; i++)teste += g[i][2-i];
    if(teste != base){
        cout << "NAO" << endl;
        return 0;
    } 

    for(int i = 0; i < 3; i++){
        teste = 0;
        for(int j = 0; j < 3; j++){
            teste += g[i][j];
        }
        if(teste != base){
            cout << "NAO" << endl;
            return 0;
        }
    }

    for(int i = 0; i < 3; i++){
        teste = 0;
        for(int j = 0; j < 3; j++){
            teste += g[j][i];
        }
        if(teste != base){
            cout << "NAO" << endl;
            return 0;
        }
    }



    cout << "SIM" << endl;

    return 0;
}