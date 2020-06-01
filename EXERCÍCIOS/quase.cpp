#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

long long n, k;
vector<long long> v;
long long ans;

bool testa(long long i){
    for(long long j = 1; j <= k; j++){
        if(i%v[j] == 0) return false;
    }

    return true;

}

void resolve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    int tmp;
    for(long long i = 1; i <= k; ++i ){
        cin >> tmp;
        if(tmp > n)
        {}
    }
        

    resolve();
    
    cout << ans << endl;

    return 0;
}