#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b;
    cin >> a >> b;
    if(a <= b){
        cout << "Pedro" << endl;
    }else{
        cout << "Paulo" << endl;
    }

    return 0;
}