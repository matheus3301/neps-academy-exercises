#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXC 10010

int lajota[MAXC];

int acao(int init, int num, int fim){
    if(init == fim) return num;
    
    if(lajota[init+2] == 1  && init+2 <= fim){
        return acao(init+2,num+1,fim);
    }else if(lajota[init+1] == 1){
        return acao(init+1,num+1,fim);
    }else{
        return -1;
    } 
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    for(int i = 0; i < c; i++){
        cin >> lajota[i];
    }
    
    int res = acao(0,0,c-1);
    cout << res << endl;

    return 0;
}