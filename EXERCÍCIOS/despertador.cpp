#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int hi,mi,hf,mf;

const int diainteiro = 60 * 24;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> hi >> mi >> hf >> mf;
    while(hi != 0 || mi != 0 || hf != 0 || mf != 0){
        
        int inicio = (hi * 60) + mi;
        int fim = (hf * 60) + mf;

        if(fim >= inicio){
            cout << fim - inicio << endl;
        }else{
            cout << diainteiro - inicio + fim << endl;  

        }


        cin >> hi >> mi >> hf >> mf;
    }
    

    return 0;
}