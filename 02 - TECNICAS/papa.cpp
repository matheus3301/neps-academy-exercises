#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n;
int memo[1010][1010];

int peso[1010];
int resi[1010];

int res;
int dp(int i, int cabe);
int pega(int a, int b);



int pega(int a, int b){
    res++;

    return dp(a,b);
}

int dp(int i, int cabe){

    if(i == n) return 0;
    if(cabe <= 0) return -10000000; 

    int &pdm = memo[i][cabe];    
    if(pdm != -1) return pdm;
    
    return pdm = min(dp(i+1, cabe), pega(i+1, min(cabe - peso[i+1], resi[i+1] - peso[i+1]) ) );

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    memset(memo, -1 , sizeof(memo));

    cin >> n;

    for(int i =0 ; i < n; i++){
        cin >> peso[i] >> resi[i];
    }

    dp(0,resi[0] - peso[0]);
    cout << res << endl;

    return 0;
}