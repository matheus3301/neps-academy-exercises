#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;
#define debug(x,y) cout << "DEBUG: " << x << " " << y << endl;


using namespace std;

typedef long long ll;

const int mxN = 110;

int grid[mxN][mxN];
bool visited[mxN][mxN];

int ii,ij,n,ans;

int mi[] = {0,1,0,-1};
int mj[] = {1,0,-1,0};

bool valido(int i, int j){
    if(i > 0 && i <= n && j > 0 && j <= n)
        return true;
    return false;
}

void dfs(int i, int j){
    if(i == -1 && j == -1) return;

    
    if(visited[i][j]) return;
    visited[i][j] = true;
    ans++;

    for(int k = 0; k < 4; k++){
        int pi = i + mi[k];
        int pj = j + mj[k];

        if(valido(pi,pj)){
            if(grid[pi][pj] >= grid[i][j] && !visited[pi][pj]){
                dfs(pi,pj);
            }
        }

        
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    cin >> ii >> ij;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> grid[i][j];
        }
    }

    dfs(ii,ij);

    cout << ans << endl;   

    return 0;
}