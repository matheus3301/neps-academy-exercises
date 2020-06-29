#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

int l, c;

char grid[110][110];
bool visited[110][110];

int mi[] = {0,0,1,-1};
int mj[] = {1,-1,0,0};

int fi,fj;

bool valido(int i, int j){
    if(i >  0 && i <= l && j > 0 && j <= c)
        return true;

    return false;
}

void dfs(int i, int j){
    visited[i][j] = true;
    fi = i;
    fj = j;

    for(int k = 0; k < 4; k++){
        

        int pi = i + mi[k];
        int pj = j + mj[k];

        if(valido(pi,pj) && grid[pi][pj] == 'H'){
    
            if(visited[pi][pj]) continue;

            dfs(pi,pj);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> l >> c;

    int ii, ji;

    for(int i = 1; i <= l; i++){
        for(int j = 1; j <= c; j++){
            cin >> grid[i][j];

            if(grid[i][j] == 'o'){
                ii = i;
                ji = j;
            }
        }
    }

    dfs(ii,ji);   

    cout << fi << " " << fj << endl;

    return 0;
}