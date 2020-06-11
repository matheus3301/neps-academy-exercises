#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"

using namespace std;

typedef long long ll;

const int mxN = 1e5+1;
int n,k,p[mxN],ans;
priority_queue<int,vector<int>, greater<int>> ignora;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> p[i];
        ans += p[i];
    }

    for(int i = k+1; i <= n; i++){
        if(i % (k+1) == 0){
            ignora.push(p[i]);
        }else{
            if(p[i] > ignora.top()){
                ignora.pop();
                ignora.push(p[i]);
            }
        }
    }

    while(ignora.size()){
        ans -= ignora.top();
        ignora.pop();
    }

    cout << ans << endl;
    return 0;
}