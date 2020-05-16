#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int moeda[] = {100,50,25,10,5,1};
int res[6];
int total;
int c;

void troco(){    
        for(int i = 0; i < 6; i++){
            if(c >= moeda[i]){
                res[i]++;
                total++;
                c -= moeda[i];
                return;
            }
        }    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> c;
    while(c > 0){
        troco();       
    }
    
    cout << total << endl;
    for(int i = 0; i < 6; i++){
        cout << res[i] << endl;
    }

    return 0;
}