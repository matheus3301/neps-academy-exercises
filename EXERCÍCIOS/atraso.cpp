#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ha, ma, hr, mr;
    cin >> ha >>  ma >>  hr >>  mr;
    
    int t = ((hr*60) + mr) - ((ha*60) + ma + 45);  

    if(t >= 0){
        cout << "Sucesso" << endl;
    }else{
        cout << "Atrasado " << abs(t) << endl;
    }

    return 0;
}