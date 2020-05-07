#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int s;
int notas[6];
int valor[] = {2,5,10,20,50,100};

long long tab[5050][6];

long long dp(int val, int tipo = 0){
    if(val == 0) return 1LL;
    if(tipo > 5 || val < 0) return 0LL;

    if(tab[val][tipo] != -1) return tab[val][tipo];

    long long total = 0LL;

    for(int i = 0; i <= notas[tipo]; i++){
        if(val<i*valor[tipo]) break;

        total += dp(val-i*valor[tipo],tipo+1);
    }

    return tab[val][tipo] = total;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> s;
    for(int i = 0; i < 6; i++){
        cin >> notas[i];
    }

    memset(tab,-1,sizeof(tab));

    cout << dp(s) << endl;
    

    return 0;
}