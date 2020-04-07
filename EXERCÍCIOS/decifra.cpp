#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string al, cod;
    cin >> al;
    cin >> cod;

    for(int i = 0; i < cod.length(); i++){
        if(cod[i] == cod[0]){
            cod[i] = 'a';
        }

        if(cod[i] == cod[1]){
            cod[i] = 'b';
        }

        if(cod[i] == cod[2]){
            cod[i] = 'c';
        }
    }
    
    cout << cod << endl;

    return 0;
}