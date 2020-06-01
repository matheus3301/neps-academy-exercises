#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

const int area = 80*70;
int b, t;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> b >> t;

    int esquerda = (b+t)*35;
    if(esquerda == area){
        cout << 0 << endl;
    }else if(esquerda > area){
        cout << 1 << endl;
    }else{
        cout << 2 << endl;
    }


    

    return 0;
}