#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int quadrado(int n);
int dist();

int xi,xf,yi,yf;

int quadrado(int n){
    return n * n;
}

int dist(){
    return (max(xf,xi)-min(xi,xf)) + (max(yf,yi)-min(yi,yf));
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> xi >> yi >> xf >> yf;

    int distan = dist();

    cout << distan << endl;
    

    return 0;
}