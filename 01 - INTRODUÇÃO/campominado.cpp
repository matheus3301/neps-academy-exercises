#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int campo[n];
    int res[n];

    for(int i = 0; i < n; i++){
        cin>>campo[i];
        res[i] =0;
    }

    

    for(int i = 0; i < n; i++){
        if(i != 0){
            if(campo[i-1] == 1){
            

                res[i]++;
            }
        }
        if(i != n-1){
            
            if(campo[i+1] == 1){
            

                res[i]++;
            }
        }
        if(campo[i] == 1){
            res[i]++;
        }

    }

    for(int i = 0; i < n; i++){
        cout << res[i] <<"\n";
    }

    return 0;
}