#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int p, m, n;
vector<pair<int,char> > baralho; 

/*
NAIPES: C D H S (prioridade é essa mesmo)

CARTA: 

*/

void solve(){
    int x;char s;
    for(int i = 0; i < n; i++){
        cin >> x >> s;
        baralho.push_back({x,s});

        
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    cin >> p >> m >> n;
    while(p != 0 && m != 0 && n != 0){
        solve();
               
        cin >> p >> m >> n;
    }
    

    return 0;
}