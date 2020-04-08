#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int oa,pa,ba;
    int ob,pb,bb;

    cin >> oa >> pa >> ba;
    cin >> ob >> pb >> bb;

    if(oa == ob){
        if(pa == pb){
            cout << (ba > bb ? "A" : "B");

        }else{
            cout << (pa > pb ? "A" : "B");

        }
    }else{
        cout << (oa > ob ? "A" : "B");
    }



    return 0;
}