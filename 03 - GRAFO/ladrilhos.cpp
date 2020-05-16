#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int h, l;
int G[210][210];

int menor = INT32_MAX;

bool valido(int x, int y){
    if(x < 0 || y < 0)
        return false;

    if(x >= h || y >= l)
        return false;
    
    return true;
}

void bfs(){
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> h >> l;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < l; j++){
            cin >> G[i][j];
        }
    }

    bfs();

    return 0;
}