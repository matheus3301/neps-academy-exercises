#include <bits/stdc++.h>

#define MAXN 1001

using namespace std;


int pino[MAXN];

int desc(int a, int b){
    return b<a;
}

int main(){
    int n,m;

    cin >> n >> m;

    memset(pino,m,MAXN);

    for(int i = 0; i < n; i++){
        cin >> pino[i];
    }

    int res = 0;
    for(int i = 1; i < n; i++){
        if(m>=pino[i-1]){
            pino[i] += m - pino[i-1];
        }else{
            pino[i] -= pino[i-1] - m;
        }

        res += abs(m-pino[i-1]);
    }
   

    cout << res << endl;
    return 0;
}