#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int b,n;

int R[30];

void verifica(){
        for(int i = 1; i <= b; i++){
            if(R[i] < 0){
                cout << "N" << endl;
                return;
            }
        }
    cout << "S" << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> b >> n;
    while(b != 0 && n != 0){
        for(int i = 1; i <= b; i++){
            cin >> R[i];
        }

        int d, c, v;
        for(int i = 0; i < n; i++){
            cin >> d >> c >> v;

            R[d] -= v;
            R[c] += v;            
        }

        
        verifica();

        cin >> b >> n;
    }
    

    return 0;
}