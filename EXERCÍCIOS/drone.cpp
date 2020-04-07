#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, h, a, b, c;

    cin >> a >> b >> c >> h >> l;

    if(a <= h && b <= l){
        cout << "S" << endl;
        return 0;

    }

    
    if(a <= h && c <= l){
        cout << "S" << endl;
        return 0;

    }

    
    if(b <= h && a <= l){
        cout << "S" << endl;
        return 0;

    }

    
    if(b <= h && c <= l){
        cout << "S" << endl;
        return 0;

    }

    
    if(c <= h && a <= l){
        cout << "S" << endl;
        return 0;

    }

    
    if(c <= h && b <= l){
        cout << "S" << endl;
        return 0;

    }


    cout << "N" << endl;

    return 0;
}