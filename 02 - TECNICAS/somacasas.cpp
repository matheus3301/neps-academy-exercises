#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 100010

long long casa[MAXN];

bool busca(int n, int inicio, int fim){
    if(inicio <= fim){
        int meio = (inicio+fim)/2;
        if(casa[meio] == n){
            return true;
        }else if(casa[meio] < n){
            return busca(n,meio+1, fim);
        }
        return busca(n,inicio,meio-1);
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    cin >> n;
    for(int i = 1; i <=n ; i++){
        cin >> casa[i];
    }
    cin >> k;

    for(int i = 1; i <=n ;i++){
        long long buscado = k - casa[i];
        if(busca(buscado,1,n)){
            cout << min(casa[i],buscado) << " " <<  max(buscado,casa[i]) << endl;

            return 0;
        }
    }

    return 0;
}