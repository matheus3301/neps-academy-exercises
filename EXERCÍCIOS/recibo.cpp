#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int k, r;
int res = 0;


void calc(int nivel, int minimo, int maximo){
    if(nivel == k){
        if(minimo <= maximo) res++;
    }else{
        for(int i = minimo; i <= maximo; i++){
            calc(nivel+1,i+1,maximo-i);
        }
    }

}


int main(){
    

    cin >> r >> k;

    calc(1,1,r);

    cout << res << endl;

    return 0;
}