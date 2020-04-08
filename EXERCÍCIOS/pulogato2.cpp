#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 510

#define INF 1000000000

int chao[MAXN][MAXN];
int dist[MAXN][MAXN];


int L, C;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> L >> C;

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            cin >> chao[i][j];
            dist[i][j] = INF;

        }
    }

    queue<pair<int,int>> fila;
    fila.push({0,0});
    dist[0][0] = 0;

    while(fila.size()){
        int l = fila.front().first;
        int c = fila.front().second;

        fila.pop();
        for(int dl = -2; dl <= 2; dl++){
            for(int dc = -2; dc <= 2; dc++){
                int ln = l +dl;
                int cn = c + dc;
                
                if(ln >= 0 && ln < L && cn >= 0 && cn < C){
                    if(dist[ln][cn] == INF && chao[ln][cn] == 1){
                        dist[ln][cn] = dist[l][c]+1;

                        fila.push({ln,cn});
                    }
                }
            }
        }

    }

    if(dist[L-1][C-1] == INF){
        cout << -1 << endl;
    }else{
        cout << dist[L-1][C-1] << endl;

    }

    return 0;
}