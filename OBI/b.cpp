#include <bits/stdc++.h>
#define endl "\n"
#define debug(x) cerr << #x << " : " << x << endl

using namespace std;

typedef long long ll;

const int mxN = 1010;

set<int> consulta[mxN];
int checked[mxN];


int n, k, u;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k >> u;
    int tmp;

    for(int i = 1; i <= n; i++){
        for(int j  = 0; j < k; j++){
            cin >> tmp;
            consulta[i].insert(tmp);
        }
    }

    bool ganhou = false;

    for(int i = 0; i < u; i++){
        cin >> tmp;

        for(int j = 1; j <= n; j++){
            if(consulta[j].count(tmp)){
                checked[j]++;
                if(checked[j] == k){
                    cout << j << " ";
                    ganhou = true;
                }
            }
        }

        if(ganhou){
            cout << endl;
            return 0;
        } 
    }
    

    return 0;
}