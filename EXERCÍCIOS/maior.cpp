#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = -1;
    int maior = 0;
    while(n != 0){
        cin >> n;
        if(n > maior){
            maior = n;
        }
    }

    cout << maior << endl;
    return 0;
}