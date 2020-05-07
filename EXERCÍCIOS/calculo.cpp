#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int x[10010];
int y[10010];
int res[10010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)cin >> x[i];        
    for(int i = 0; i < m; i++)cin >> y[i];

    int anssize = max(n,m);
    int resto = 0;
    for(int i = anssize-1; i >= 0; i--){
        int tmp = x[i] + y[i] + resto;
        res[i] = tmp % 2;
        resto = tmp/2;
    }

    int val = 0;
    for(int i = 0; i < anssize; i++){
        if(res[i] > 0) val = i+1;
    }

    for(int i = 0; i < val; i++){
        cout << res[i] << " ";
    }   
    cout << endl;


    

    

    return 0;
}