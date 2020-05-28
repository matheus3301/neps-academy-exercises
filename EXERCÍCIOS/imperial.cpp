#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n;

int inicial[505];
int v[505];

int ans = 1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;    
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        if(!inicial[v[i]]){
            inicial[v[i]] = i;
        }
    }

    for(int i = 1; i <= n; i++){        
        if(inicial[i]){
            for(int j = 1; j <= n; j++){
                if(inicial[j] && i != j){

                    int busca = i;
                    int tamanho = 0;

                    for(int k = inicial[i]; k <= n; k++){
                        if(v[k] == busca){


                            tamanho++;
                            busca = (busca == i ? j : i);
                        }
                    }

                    ans = max(ans,tamanho);
                }
             }
        }        
    }

    cout << ans << endl;

    return 0;
}