#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int grid[3][3];
    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
        cin >> grid[i][j];

    long long d1 = 0;
    long long d2 = 0;
    for(int i = 0; i < 3; i++) d1 += grid[i][i];

    for(int i = 0; i < 3; i++) d2 += grid[i][2-i];
    

    cout << "Diagonal principal: " << d1 << endl;
    cout << "Diagonal secundaria: " << d2 << endl;

    
    return 0;
}