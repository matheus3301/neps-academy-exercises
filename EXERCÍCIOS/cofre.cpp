#include <bits/stdc++.h>

#define endl "\n"

#define MAXN 100010

using namespace std;

long long final[10];

int n, m;

int V[MAXN], P[MAXN];

void prefixo(int e,int d,int val){
    P[e] += d;
    P[d+1] += -d;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    int ult = 0;
    prefixo(0,0,1);

    for(int i = 0; i < m; i++){
        int tmp;
        cin >> tmp;

        int inicio = min(tmp,ult);
        int fim = max(tmp,ult);

        prefixo(inicio, fim, 1);
        prefixo(fim,fim,-1);

        ult = tmp;
    }

    for(int i = 1; i < n; i++){
        P[i] += P[i-1];

        final[V[i]] += P[i];
    }

    for(int i = 0; i < 10; i++)
        cout << final[i] << " ";
    
    cout << endl;
    return 0;
}