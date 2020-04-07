#include <bits/stdc++.h>

using namespace std;

#define MAXT 100001

long int raio[MAXT];

long long int quadrado(int a){
    return a*a;
}

double disto(int x,int y){
    return sqrt(quadrado(x) + quadrado(y));
}

int ponto(double a,int i,int max){
    if(i == -1) return 0;
    if(raio[i] >= a) return ponto(a, i-1,max);
    return max-i-1;
        
}

int main(){
    int c,t;    
    int x,y;

    cin >> c >> t;
    
    int res = 0;

    for(int i = 0; i < c; i++){
        cin >> raio[i];
    }
    
    double dist;

    for(int i = 0; i < t; i++){
        cin >> x >> y;
        dist = disto(x,y);

        res += ponto(dist,c-1,c);    
    }

    cout << res << endl;
    
    return 0;
}