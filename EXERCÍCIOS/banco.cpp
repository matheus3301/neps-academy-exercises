#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int c, n;
queue<pair<int,int > > fila;
int caixa[10010];

int t, d;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> c >> n;
    for(int i = 0 ; i < n; i++){
        cin >> t >> d;
        fila.push({t,d});        
    }
    int ans = 0, tempo = fila.front().first;

    while(!fila.empty()){
        for(int i = 0; i < c; i++){
            if(caixa[i] > 0) caixa[i]--;
            if(tempo < fila.front().first){
                caixa[i] -= fila.front().first - tempo;
                tempo = fila.front().first - 1;
            }
            if(caixa[i] <= 0){
                caixa[i] = fila.front().second;
                if(tempo - fila.front().first > 20){
                    ans++;
                } 
                fila.pop(); 
                if(fila.empty()){
                    cout << ans << endl;
                    return 0;

                }
            }

        }

        tempo++;
    }

    cout << ans << endl;
    return 0;

    return 0;
}