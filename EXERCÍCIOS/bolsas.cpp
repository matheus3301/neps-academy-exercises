#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

const int mxN = 10010;

#define t first
#define d second

int n, ans, s;
pair<int,int> e[mxN];

bool ord(pair<int,int> a, pair<int,int> b){
    if(a.d != b.d){
        return a.d < b.d;
    }

    return a.t > b.t;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        e[i] = {a, b};
    }

    sort(e,e+n,ord);   
    
    for(int i = 0; i < n; i++){
        s += e[i].t;
        ans = max(ans,s - e[i].d);
    }

    cout << ans << endl;

    return 0;
}