#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

const int mxN = 10010;

int id[mxN];
int sz[mxN];

int n;

int find(int p){
    if(id[p] == p) return p;
    return id[p] = find(id[p]);
}


void join(int p, int q){
    p = find(p);
    q = find(q);

    if(p == q) return;

    //p sempre menor tamanho(swap)
    if(sz[p] > sz[q]) swap(p,q);

    id[p] = q;
    sz[q] += sz[p];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    //todo mundo começa com tamanho um e sendo pai de si mesmo
    for(int i =0; i <= n; i++){
        sz[i] = 1;
        id[i] = i;
    }

    return 0;
}