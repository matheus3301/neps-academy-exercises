#include <bits/stdc++.h>

using namespace std;

priority_queue<int,vector<int>,greater<int>> caixas;

int t,d,c,n,ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> c >> n;
    for(int i = 0; i < c; i++){
        caixas.push(0);
    }
            
    for(int i = 0; i < n; i++){
        cin >> t >> d;

        int caixa = caixas.top();
        caixas.pop();

        if(caixa > t  + 20){
            ans++;
        }

        caixas.push(max(t,caixa) + d);
    }
    
    cout << ans << endl;
    return 0;
}