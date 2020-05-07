#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int v[4][4];

int det(){
    return (((v[2][0] * v[0][1] * v[1][2]) +(v[0][0] * v[1][1] * v[2][2]) + (v[1][0] * v[2][1] * v[0][2])) - ((v[2][2] * v[0][1] * v[1][0]) + (v[0][2] * v[1][1] * v[2][0]) + (v[1][2] * v[2][1] * v[0][0])));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> v[i][j];
    
    cout << det() << endl;
    return 0;
}