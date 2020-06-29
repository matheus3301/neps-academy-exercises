#include <bits/stdc++.h>
#define endl "\n"
#define debug(x) cerr << #x << " : " << x << endl;

using namespace std;


const int mxN = 110;
const int mxM = 6000;

struct edge{
    int u,v,w;
};

bool ordena(edge a, edge b){
    return a.w < b.w;
}

int n,f,r;
int ans;

edge F[mxM];
edge R[mxM];

int id[mxN];
int sz[mxN];

int find(int p){
    if(id[p] == p) return p;
    return id[p] = find(id[p]);
}

void join(int p,int q){
    p = find(p);
    q = find(q);

    if(p == q) return;

    if(sz[p] > sz[q]) swap(p,q);

    id[p] = q;
    sz[q] += sz[p];

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> f >> r;

    for(int i = 0; i < f; i++){
        cin >> F[i].u >> F[i].v >> F[i].w;        
    }

    
    for(int i = 0; i < r; i++){
        cin >> R[i].u >> R[i].v >> R[i].w;        
    }

    for(int i = 0; i <= n; i++){
        sz[i] = 1;
        id[i] = i;
    }

    sort(F,F+f,ordena);
    for(int i = 0; i < f; i++){
        if(find(F[i].u) == find(F[i].v)) continue;

        join(F[i].u,F[i].v);

        ans += F[i].w;

    }

    sort(R,R+r,ordena);
    for(int i = 0; i < r; i++){
        if(find(R[i].u) == find(R[i].v)) continue;

        join(R[i].u,R[i].v);

        ans += R[i].w;

    }


    cout << ans << endl;

    return 0;
}