#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int c, f;
int peso[60], valor[60];

int memo[60][1010];

int pd(int i, int resta);

int pd(int i, int resta){
    if(resta < 0) return -1000000;
    if(i == f) return 0;

    int &pdm = memo[i][resta];
    if(pdm != -1) return pdm;

    return pdm = max(pd(i+1,resta-peso[i]) + valor[i], pd(i+1,resta));

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> c >> f;
    int it = 0;
    while(c != 0 && f != 0){
        memset(memo,-1,sizeof(memo));
        
        for(int i = 0; i < f; i++){
            cin >> peso[i] >> valor[i];
        }

        cout << "Teste " << ++it << endl;
        cout << pd(0,c) << endl;
        cout << endl;

        cin >> c >> f;
    }


    return 0;
}