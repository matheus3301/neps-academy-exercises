#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n,ans;
long long h[100010];
bool direita[100010], esquerda[100010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    long long d = h[n-1];
    long long e = h[0];

    for(int i = 1; i < n; i++){
        if(h[i] < e){
            esquerda[i] = true;
        }
        if(h[i] > e){
            e = h[i];
        }
    }

    for(int i = n-2; i >= 0; i--){
        if(h[i] < d){
            direita[i] = true;
        }
        if(h[i] > d){
            h[i] = d;
        }
    }

    for(int i = 1; i < n-1; i++){
        if(esquerda[i] && direita[i])
        ans++;
    }

    cout << ans << endl;

    return 0;
}