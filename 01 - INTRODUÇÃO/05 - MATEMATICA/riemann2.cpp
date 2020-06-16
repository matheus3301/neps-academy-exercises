#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

bool composto[12000010];
vector<long long> primon;

int bsearch(long long val,int inicio = 0, int fim = primon.size()-1){
    int meio = inicio + (fim-inicio)/2;

    if(primon[meio] == val){
        return meio;
    }else if(primon[meio] > val){
        return bsearch(val,inicio,meio-1);
    }
        return bsearch(val,meio+1,fim);
    

}

void crivo(){
    composto[1] = true;
    for(int i = 2; i <= 12000000; i++){
        if(!composto[i]){
            primon.push_back(i);
            for(int j = 2; j*i <= 12000000; j++){
                composto[i*j] = true;
            }
        }
        
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    crivo();
    
    int n;
    long long tmp;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> tmp;
        cout << bsearch(tmp)+1 << endl;
    }

    return 0;
}