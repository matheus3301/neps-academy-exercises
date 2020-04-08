#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 1010

int m[MAXN];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m[i];
    }

    for(int i = 1; i < n-1; i++){
        if(m[i] < m[i-1] && m[i] < m[i+1]){
            cout << "S" << endl;
            return 0;
        }
    }

    cout << "N" << endl;   


    return 0;
}