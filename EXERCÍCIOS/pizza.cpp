#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"

using namespace std;

typedef long long ll;

int n;
int k[100010];

ll kadane(){
    ll maior = 0 , res = 0;

    for(int i = 0; i < n; i++){
        maior = max(0LL,maior+k[i]);
        res = max(res,maior);
    }

    return res;
}


ll circular(){
    ll kad = kadane();

    ll sum = 0LL;
    for(int i = 0; i < n; i++){
        sum += ll(k[i]);
        k[i] = -k[i];
    }

    sum += kadane();

    return max(kad,sum);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> k[i];       
    }

    cout << circular() << endl;

    return 0;
}