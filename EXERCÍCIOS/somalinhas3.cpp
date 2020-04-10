#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 3; i++ ){
        int soma = 0;
        
        for(int j = 0; j < 3; j++){
            int tmp;
            cin >> tmp;

            soma += tmp;
        }

        cout << "Linha "<<i <<": " << soma << endl;        
    }


    return 0;
}