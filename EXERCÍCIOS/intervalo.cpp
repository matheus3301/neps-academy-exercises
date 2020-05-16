#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;

    if(a < b){
        for(int i = a; i <= b; i++){
            cout << i << " ";
        }
        cout << endl;
    }else{
        for(int i = b; i <= a; i++){
            cout << i << " ";
        }
        cout << endl;

    }
    

    return 0;
}