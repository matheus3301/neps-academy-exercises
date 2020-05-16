#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int B[100];

int N[100];

int n, b;


bool verifica(){
    for(int i = 0; i <= n; i++){
        if(N[i] == 0) return false;
    }

    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> b;
    while( n != 0 && b != 0){
        for(int i = 0; i <= n; i++) N[i] = 0;

        for(int i = 0; i < b; i++){
            cin >> B[i];
        }
        
        for(int i = 0; i < b; i++){
            for(int j = i; j < b; j++){
                N[abs(B[i]-B[j])]++;
            }
        }

        cout << (verifica() ? "Y" : "N") << endl;
        

        cin >> n >> b;
    }
    
    

    return 0;
}