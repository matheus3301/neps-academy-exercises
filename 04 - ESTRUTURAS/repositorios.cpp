#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

int c, n;

vector<pair<ll,ll> > local;
map<ll,ll> repo;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> c >> n;

    ll p,v;
    for(int i = 0; i < c; i++){
        cin >> p >> v;
        local.push_back({p,v});
    }
    
    for(int i = 0; i < n; i++){
        cin >> p >> v;

        if(repo.find(p) != repo.end()){
            repo[p] = max(repo[p],v);
        }else{
            repo[p] = v;
        }
    }

    for(auto programa : local){
        if(repo.find(programa.first) != repo.end()){
            if(repo[programa.first] > programa.second){
                cout << programa.first << " " << repo[programa.first] << endl;
            }
        }
    }

    return 0;
}