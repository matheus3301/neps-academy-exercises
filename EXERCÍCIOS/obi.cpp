#include <bits/stdc++.h>

#define endl "\n"

using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, n;
    int res = 0;

    cin >> n >> p;

    int x,y;
    for(int i = 0; i < n;i++){
        cin >> x >> y;
        if(x+y >= p) res++;
    }

    cout << res << endl;
    
    return 0;
}