#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int t[110][110];
int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> t[i][j];
        }
    }

    for(int i = 2; i <= n; i++){
        for(int j = 2; j <= n; j++){
            if(t[i][j-1] + t[i-1][j-1] + t[i-1][j] > 1){
                t[i][j] = 0;
            }else{
                t[i][j] = 1;

            }
        }
    }

    cout << t[n][n] << endl;

    return 0;
}