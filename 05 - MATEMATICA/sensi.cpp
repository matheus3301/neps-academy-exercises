#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int dist(int xi,int xf, int yi, int yf);
int quad(int x);

int xi,yi,xf,yf;


int quad(int x){
    return x * x;
}


int dist(){
    return quad(xf - xi) + quad(yf-yi);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;


    int res = 0;

    for(int i = 0; i < n; i++){
        cin >> xi >> yi >> xf >> yf;
        res += dist(); 
    }

    cout << res << endl;

    return 0;
}