#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n, m;

int vet[100010];
int prefix[100010];

long long final[10];

void atualiza(int incicio, int fim, int val);

void atualiza(int inicio, int fim, int val){
    prefix[inicio] += val;
    prefix[fim+1] -= val;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> vet[i];

    int ultimo = 1,tmp;

    atualiza(1,1,1);

    for(int i = 0; i < m; i++){
        cin >> tmp;

        atualiza(min(tmp,ultimo),max(tmp,ultimo),1);
        atualiza(ultimo,ultimo,-1);

        
        ultimo = tmp;
    }

    for(int i = 1; i <= n; i++){
        prefix[i] += prefix[i-1];

        final[vet[i]] += prefix[i];        
    }

    for(int i = 0; i < 10; i++){
        cout << final[i] << " ";
    }
    cout << endl;

    return 0;
}