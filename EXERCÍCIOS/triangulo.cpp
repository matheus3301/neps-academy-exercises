#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int var[4];
    for(int i = 0; i < 4; i++){
        cin >> var[i];
    }
    sort(var,var+4);

    if(var[0] < var[1] + var[2] && var[1] < var[0] + var[2] && var[2] < var[0] + var[1]){
        cout << "S" << endl;
        return 0;
    }
    
    if(var[1] < var[2] + var[3] && var[2] < var[1] + var[3] && var[3] < var[1] + var[2]){
        cout << "S" << endl;
        return 0;
    }
    cout << "N" << endl;
    return 0;
}