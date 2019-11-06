#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,op;

    cin >> n >> op;

    int matriz[n][n];

    int res[n];

    for(int i = 0; i < n; i++){
        res[n] = -1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n;j++){
            matriz[i][j] = 0;
        }
    }
    int ind = 0;
    for(int i = 0; i < op; i++){
        int t,a,b;

        cin >> t >> a >> b;

        if(t == 1){
            matriz[a-1][b-1] = 1;
            matriz[b-1][a-1] = 1;

        }else{
            res[ind] =  matriz[a-1][b-1];
            ind++;
        }
    }

    for(int i = 0; i < ind; i++){
        
            cout << res[i] <<"\n";
      
           
        
    }
    
    return 0;
}