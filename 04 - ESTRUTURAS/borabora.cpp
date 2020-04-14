#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int p, m, n;

pair<int, char> carta[310];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> p >> m >> n;
    while(p != 0 && m != 0 && n != 0){
        
        for(int i = 0; i < n; i++){
            int ntmp;
            char ctmp;

            cin >> ntmp >> ctmp;

            carta[i] = {ntmp,ctmp};

        }

        for(int i = 0; i < p*m; i++){
            
        }


        
        cin >> p >> m >> n;
    }
    

    return 0;
}