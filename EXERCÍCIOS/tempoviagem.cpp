#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long res = 1;

    int d1,h1,m1;
    int d2,h2,m2;

    cin >> d1 >> h1 >> m1 >> d2 >> h2 >> m2;

    res = (d2-d1)*24*60*60 + (h2-h1)*60*60 + (m2-m1)*60;

    cout << res << endl;




    

    return 0;
}