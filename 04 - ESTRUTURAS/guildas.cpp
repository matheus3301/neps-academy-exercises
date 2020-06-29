#include <bits/stdc++.h>
#define endl "\n"
#define debug(x) cerr << #x << " : " << x << endl;

using namespace std;

typedef long long ll;

int n, m;
int q,a,b;

const int mxN = 1e5 + 1;

int sz[mxN];
int id[mxN];

int find(int p){
    if(p == id[p]) return p;
    return id[p] = find(id[p]);
}

void join(int p, int q){
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
    
    cin >> n >> m;
    while(n != 0 || m != 0){
        
        for(int i = 1; i <= n; i++){
            cin >> sz[i];
            id[i] = i;
        }

        int ans = 0;

        while(m--){
            cin >> q >> a >> b;

            if(q == 1){
                join(a,b);
            }else{
                if(sz[find(a)] > sz[find(b)]){
                    ans += find(1) == find(a);
                }else if(sz[find(b)] > sz[find(a)]){
                    ans += find(1) == find(b);
                }
            }
        }

        cout << ans << endl;

        cin >> n >> m;
    }

    

    return 0;
}