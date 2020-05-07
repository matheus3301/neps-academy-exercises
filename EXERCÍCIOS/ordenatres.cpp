#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int v[3];

    cin >> v[0] >> v[1] >> v[2];

    sort(v,v+3);

    for(int i = 0; i < 3; i++)
        cout << v[i] << endl;
    

    return 0;
}