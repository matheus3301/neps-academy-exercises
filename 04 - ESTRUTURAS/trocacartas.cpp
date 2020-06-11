#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

int a, b,ans1,ans2;

set<int>x,y,c;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    int tmp;
    for(int i = 0; i < a; i++){
        cin >> tmp;
        x.insert(tmp);
        c.insert(tmp);
    }
    for(int i = 0; i < b; i++){
        cin >> tmp;
        y.insert(tmp);
        c.insert(tmp);
    }

    for(auto carta : c){
        
        auto busca1 = x.find(carta);
        auto busca2 = y.find(carta);

        if(busca1 != x.end() && busca2 == y.end()){
            ans1++;
        }

        if(busca2 != y.end() && busca1 == x.end()){
            ans2++;
        }
    }
    
    cout << min(ans1,ans2) << endl;

    return 0;
}