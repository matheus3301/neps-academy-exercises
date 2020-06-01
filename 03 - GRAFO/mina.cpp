#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"

using namespace std;

typedef long long ll;

const int mxN = 110;
const int INF = 2e31;

int grid[mxN][mxN];
int dist[mxN][mxN];
int visited[mxN][mxN];


int mx[] = {0,0,1,-1};
int my[] = {1,-1,0,0};

priority_queue<pair<int,pair<int,int>>> q;


int n;

bool valido(int a, int b){
    if(a >= 1 && a <= n && b >= 1 && b <= n){
        return true;
    }else{
        return false;
    }
}

void dij(int i,int j){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= n; j++){
            dist[i][j] = INF;
        }
    }

    dist[i][j] = 0;

    q.push({0,{i,j}});

    while(!q.empty()){
        int ax = q.top().second.first;
        int ay = q.top().second.second;
        q.pop();

        if(visited[ax][ay]) continue;

        visited[ax][ay] = true;

        for(int mv = 0; mv < 4; mv++){
            int px = ax + mx[mv];
            int py = ay + my[mv];

            if(valido(px,py)){
                if(dist[ax][ay] + grid[px][py] < dist[px][py]){
                    dist[px][py] = dist[ax][ay] + grid[px][py];
                    q.push({-dist[px][py],{px,py}});
                }
            }
        }


    }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> grid[i][j];
        }
    }
    
    dij(1,1);

    cout << dist[n][n] << endl;

    return 0;
}