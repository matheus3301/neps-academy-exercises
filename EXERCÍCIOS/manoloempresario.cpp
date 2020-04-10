#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

long long F[100010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long piso, teto, maior = 0, arrecadar = 0;
    cin >> n >> piso;

    for(int i = 0; i < n; i++){
        cin >> F[i];
        if(F[i] > maior){
            maior = F[i];
        }

        if(F[i] < piso){
            arrecadar += piso - F[i]; 
        }
    }
    
    sort(F,F+n);
    for(teto = maior; teto >= piso; teto--){
        long long arrecadado = 0;
        for(int i = 0; i < n; i++){
            if(F[i] > teto){
                arrecadado += F[i] - teto;
            }
        }

        if(arrecadado >= arrecadar){
            cout << teto << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}