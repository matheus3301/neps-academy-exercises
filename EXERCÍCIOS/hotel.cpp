#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ai, bi, af, bf;
    cin >> ai >> bi >> af >> bf;

    int res = 0;

    if(bi != bf){
        res++;

        ai = ai == 1 ? 0 : 1;
    }

    if(ai != af) res++;

    cout << res << endl;

    return 0;
}