#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int N,M;
long long ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    
    for(int i = 1 ; i <= M; i++){
        ans += max(0,min(M,N-i-1)-max(1,N-i-M)+1);
    }
    
    cout << ans << endl;
    return 0;
}