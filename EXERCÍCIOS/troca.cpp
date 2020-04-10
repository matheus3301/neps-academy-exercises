#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 100010

pair<long long, long long> carta[MAXN];
int n,t;

int op[MAXN];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(op,0,sizeof(op));

    cin >> n >> t;
    for(int i = 1; i <= n; i++){
        cin >> carta[i].first;    
    }
    for(int i = 1; i <= n; i++){
        cin >> carta[i].second;    
    }

    for(int i = 0; i < t; i++){
        int x,y;
        cin >> x >> y;
        
        op[x]++;
        op[y+1]--;

    }

    for(int i = 1; i <=n ;i++){
        op[i] += op[i-1];
    }



    for(int i = 1; i <= n; i++){
        cout << (op[i]%2==0 ? carta[i].first : carta[i].second) << " ";
    }
    cout << endl;


    return 0;
}