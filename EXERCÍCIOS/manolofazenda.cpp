#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 55

long long res;

int grid[MAXN][MAXN];

long long colher(int li,int ci,int lf,int cf){
    long long cenoura = 0;
    for(int i = li; i <= lf;i++){
        for(int j = ci; j <= cf; j++){
            cenoura += grid[i][j];
            grid[i][j] = 0;
        }
    }

    return cenoura;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n;

    for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++) 
        cin >> grid[i][j];

    cin >> q;
    for(int i = 0; i < q; i++){
        int li,ci,lf,cf;
        cin >> li >> ci >> lf >> cf;

        res += colher(li,ci,lf,cf);

    }

    cout << res << endl;
    return 0;
}