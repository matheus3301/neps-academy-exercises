#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int maior = INT32_MIN;
    int menor = INT32_MAX;

    int tmp;

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;

        if(tmp > maior){
            maior = tmp;
        }

        if(tmp < menor){
            menor = tmp;
        }
    }

    cout << maior << endl;
    cout << menor << endl;



    

    return 0;
}