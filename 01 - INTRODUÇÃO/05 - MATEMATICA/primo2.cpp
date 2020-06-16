#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

long long n;

bool composto[10000010];

void crivo(){
    composto[1] = true;
    for(int i = 2; i <=n; i++){
        if(!composto[i]){
            for(int j = 2; j*i <= n; j++){
                composto[i*j] = true;
            }
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    crivo();

    for(int i = 2; i <= n; i++){
        if(!composto[i]){
            cout << i << " ";
        }

    }

    cout << endl;

    return 0;
}