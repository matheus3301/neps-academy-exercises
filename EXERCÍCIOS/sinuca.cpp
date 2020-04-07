#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 70

int vet[MAXN][MAXN];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> vet[i][0];
    }

    for(int j = 1; j < n;j++){
        for(int i = 0; i < n; i++){
            if(vet[i][j-1] == vet[i+1][j-1]){
                vet[i][j] = 1;
            }else{
                vet[i][j] = -1;
            }
        }
    }

    
    if(vet[0][n-1] == -1){
        cout << "branca" << endl;
    }else{
        cout << "preta" << endl;

    }

    return 0;
}