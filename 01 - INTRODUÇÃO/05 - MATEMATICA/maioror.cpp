#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 100010

int V[MAXN];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> V[i];
    }
    
    int maior = 0;

    for(int i = 0; i < n;i++){
        for(int j = i+1; j < n; j++){
            if(V[i]|V[j] > maior){
                maior = V[i]|V[j];
            }
        }
    }

    cout << maior << endl;
    return 0;
}