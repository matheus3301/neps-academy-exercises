#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c, n;
    cin >> c >> n;
    c--;
    int levado = 0;

    int res = 0;
    while(levado < n){
        levado += c;

        res++;
    }    

    cout << res << endl;
    return 0;
}