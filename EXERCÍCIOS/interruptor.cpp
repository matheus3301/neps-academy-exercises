#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAX 1010

int l[MAX];
vector<int> it[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    memset(l,0,m);

    int init;
    cin >> init;
    for(int i = 0; i < init; i++){
        int acesa;
        cin >> acesa;
        
        l[acesa] = 1;
    }

    for(int i = 0; i < n; i++){
        int tam;
        cin >> tam;
        for(int j = 0; j < tam; j++){
            
        }
    }
    return 0;
}