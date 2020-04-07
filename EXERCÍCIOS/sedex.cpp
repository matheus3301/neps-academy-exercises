#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int bola, a, l , p;

    cin >> bola >> a >> l >> p;

    if(bola > a){
        cout << "N" << endl;
        return 0;
    }

    if(bola > l){
        cout << "N" << endl;
        return 0;
    }

    if(bola > p){
        cout << "N" << endl;
        return 0;
    }

    cout << "S" << endl;

    return 0;
}