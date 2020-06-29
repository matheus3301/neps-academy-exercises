#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

int n, k;

const int mxN = 1e6 + 1;

int id[mxN];
int sz[mxN];

int find(int p){
    if(p == id[p]) return p;
    return id[p] = find(id[p]);
}

void join(int p, int q){
    p = find(p);
    q = find(q);

    if(p == q ) return;

    if(sz[p] > sz[q]) swap(p,q);

    id[p] = q;
    sz[q] += sz[p];

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        id[i] = i;
        sz[i] = 1;
    }

    char c;
    int a, b;
    while(k--){
        cin >> c >> a >> b;

        if(c == 'F'){
            join(a,b);
        }else{
            cout << (find(a) == find(b) ? "S" : "N") << endl;
        }
    }

    return 0;
}