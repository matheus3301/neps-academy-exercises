#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


long long C[100010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long f;
    cin >> n >> f;
    for(int i = 0; i < n; i++){
        cin >> C[i];
    }

    long long t = 0;
    long long soma = 0;
    while(soma < f){
        t++;
        for(int i = 0; i < n; i++){
            if(t % C[i] == 0){
                soma += 1;
            }
        }
    }

    cout << t << endl;

    return 0;
}