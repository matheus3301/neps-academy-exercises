#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int vet[10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 10; i++) cin >> vet[i];

    int n;
    cin >> n;

    int res = 0;
    for(int i = 0; i < 10; i++){
        if(vet[i] == n)res++;
    }

    if(res == 0){
        cout << "Mia x" << endl;
    }else{
        cout << res << endl;
        for(int i = 0; i < 10; i++){
            if(vet[i] == n)cout << i << " ";
         }
        cout << endl;
    }
    

    return 0;
}