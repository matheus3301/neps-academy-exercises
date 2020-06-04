#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int l[3];

int quadrado(int a){
    return a * a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> l[0] >> l[1] >> l[2];
    sort(l,l+3, greater<int>());

    if(l[0] >= l[1] + l[2]){
        cout << "n" << endl;
    }else if(quadrado(l[0]) < quadrado(l[1]) + quadrado(l[2])){
        cout << "a" << endl;
    }else if(quadrado(l[0]) > quadrado(l[1]) + quadrado(l[2])){ 
        cout << "o" << endl;
    }else{
        cout << "r" << endl;
    }

    return 0;
}