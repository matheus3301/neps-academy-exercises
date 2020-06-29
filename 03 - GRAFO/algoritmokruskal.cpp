#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

const int mxN = 510;
const int mxM = 124751;

struct edge{
    int u,v,w;
};

bool ordena(edge a, edge b){
    return a.w < b.w;
}

int id[mxN];
int sz[mxN];

bool mst[mxM];

edge edges[mxM];


int n,m;
int sum;

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

void kruskal(){
    sort(edges,edges+m,ordena);

    for(int e = 0; e < m; e++){
        if(find(edges[e].u) == find(edges[e].v)) continue;

        join(edges[e].u, edges[e].v);

        mst[e] = true;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    //todo mundo começa com tamanho 1 e sendo pai de si mesmo
    for(int i =0; i <= n; i++){
        sz[i] = 1;
        id[i] = i;
    }

    for(int i = 0; i < m; i++){
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    kruskal();


    for(int i = 0; i < m; i++){
        if(mst[i]){
            cout << edges[i].w << endl;
            sum += edges[i].w;
        }
    }

    debug(sum);

    return 0;
}