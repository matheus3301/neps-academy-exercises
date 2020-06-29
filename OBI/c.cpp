#include <bits/stdc++.h>
#define endl "\n"
#define debug(x) cerr << #x << " : " << x << endl

#define x first
#define y second

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mxN = 510;

int n, f;


int mx[4] = {0,0,1,-1};
int my[4] = {1,-1,0,0};


char grid[mxN][mxN];


bool valido(int a, int b){
    if(a > 0 && a <= n && b > 0 && b <= n){
        return true;
    }

    return false;
    
}

void bfs(int xi,int yi){

    queue<ii> fila;
    fila.push({xi,yi});

    while(fila.size()){
        ii tmp = fila.front();
        fila.pop();

        for(int i = 0; i < 4; i++){
            

                int px = tmp.x+mx[i];
                int py = tmp.y+my[i];

                if(valido(px ,py)){
                    if(grid[px][py] != '*' && grid[px][py] <= f + '0'){
                        grid[px][py] = '*';
                        fila.push({px,py});
                    }
                }

            
        }


    }
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> f;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> grid[i][j];
        }
    }

    if(grid[1][1] <= f + '0')
        bfs(1,1);

    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }


    return 0;
}