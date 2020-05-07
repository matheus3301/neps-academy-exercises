#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 100010

int a[MAXN];
int n;


long long sumr(int j){
    long long r = 0;
    
    for(int i = j+1; i <= n; i++){
        r+= a[i];        
    }

    return r;
}

long long suml(int j){
    long long l = 0;

    for(int i = 0; i<= j; i++){
        l += a[i];
    }

    return l;
}

int busca(int inicio = 1, int fim = n){
    if(inicio <= fim){
        int meio = inicio + (fim-inicio)/2; 
        
        long long l = suml(meio);
        long long r = sumr(meio); 

        if(l == r) return meio;

        if(l < r){
            return busca(meio+1, fim);
        }
            return busca(inicio, meio-1);
    }

    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    cout << busca() << endl;
    
    return 0;
}