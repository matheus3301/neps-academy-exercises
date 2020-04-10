#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h[4];
    for(int i = 0; i < 4; i++){
        cin >> h[i];
    }
    sort(h,h+4);
    cout << abs((h[0]+h[3]) - (h[1]+h[2])) << endl;

    return 0;
}