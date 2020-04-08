#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 1010

int v[MAXN];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    
    sort(v,v+N);
    cout << v[0] << endl;

    return 0;
}