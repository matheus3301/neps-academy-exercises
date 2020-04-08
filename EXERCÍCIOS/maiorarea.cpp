#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int lp,ap;
    int ls,as;

    cin >> lp >> ap;
    cin >> ls >> as;


    int areap = lp * ap;
    int areas = ls * as;

    if(areap == areas){
        cout << "Empate" << endl;
    }else{
        if(areap > areas){
            cout << "Primeiro" << endl;
        }else{
            cout << "Segundo" << endl;
        }
    }

    

    return 0;
}