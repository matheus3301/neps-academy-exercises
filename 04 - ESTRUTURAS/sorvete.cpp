#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

#define ini first
#define fim second

using namespace std;

typedef long long ll;

int p, s;
pair<int,int > S[5010];
vector<pair<int,int > > ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> p >> s;

    int u,v;
    for(int i = 0; i < s; i++){
        cin >> u >> v;
        S[i] = {u,v};
    }

    sort(S,S+s);

    int inicio = S[0].ini;
    int fin = S[0].fim;
    for(int i = 1; i < s; i++){
        if(fin < S[i].ini){

            ans.push_back({inicio,fin});

            inicio = S[i].ini;
            fin = S[i].fim;
        }else{
            if(S[i].fim > fin)
                fin = S[i].fim;
        }
    }

    ans.push_back({inicio,fin});

    sort(ans.begin(),ans.end());

    for(auto res : ans){
        cout << res.ini << " " << res.fim << endl;
    }

    return 0;
}