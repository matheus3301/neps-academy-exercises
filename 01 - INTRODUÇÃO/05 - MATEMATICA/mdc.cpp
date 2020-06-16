#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int V[100010];

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }
    int prev = gcd(V[0],V[1]);
    int tmp;

    for(int i = 2; i < n; i++){
        tmp = gcd(prev, V[i]);

        prev = tmp;
    }

    cout << prev << endl;
    return 0;
}