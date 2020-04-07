#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 1010

int v[MAXN];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, com, fim, res = 0;

    cin >> n >> com >> fim;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int soma = v[i] + v[j];

            if(soma <= fim && soma >= com){
                res++;
            }
        }
    }

    cout << res << endl;
    return 0;
}