#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int C[10010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> C[i];
    }

    if(C[1] > 8){
        cout << "N" << endl;
        return 0;
    }

    int prev = 0;
    for(int i = 1; i <= n; i++){
        if(C[i] - prev > 8){
            cout << "N" << endl;
            return 0;
        }

        prev = C[i];
    }


    cout << "S" << endl;

    return 0;
}