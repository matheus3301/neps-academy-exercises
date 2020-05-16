#include <bits/stdc++.h>
#define endl "\n"
#define x first
#define y second

using namespace std;

int grid[1010][1010];

int dist[1010][1010];

int xi,yi;
int xf,yf;
int n, m;

typedef pair<int,int> ii;

int mx[4] = {0,0,1,-1};
int my[4] = {1,-1,0,0};

bool valido(int a, int b){
    if(a >= 0 && a <= n && b >=0 && b <= m){
        return true;
    }else{
        return false;
    }
}

void bfs(){
    dist[xi][yi] = 1;

    queue<ii> fila;
    fila.push({xi,yi});

    while(fila.size()){
        ii tmp = fila.front();
        fila.pop();

        for(int i = 0; i < 4; i++){
            

                int px = tmp.x+mx[i];
                int py = tmp.y+my[i];

                if(valido(px ,py)){
                    if(dist[px][py] == -1 && grid[px][py] != 0){
                        dist[px][py] = dist[tmp.x][tmp.y] + 1;
                        fila.push({px,py});
                    }
                }

            
        }


    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dist,-1,sizeof(dist));

    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 2){
                xi = i;
                yi = j;
            }else if(grid[i][j] == 3){
                xf = i;
                yf = j;
            }
        }
    }
    
    bfs();     

    cout << dist[xf][yf] << endl;

    return 0;   
}