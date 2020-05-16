#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

long long N;
long long A[50010];
long long decr[50010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    for(long long i = 1; i <= N; i++){
        cin >> A[i];
    }

    long long prev = 0;
    for(long long i = 1; i <= N; i++){
        if(A[i] > prev){
            decr[i] = prev + 1;
        }else{
            decr[i] = A[i];
        }

        prev = decr[i];
    }

    prev = 0;
    long long res = 0;
    for(long long i = N ; i > 0; i--){
        if(A[i-1] > prev){
            prev += 1;
        }else{
            prev = A[i-1];
        }

        res = max(res, min(prev,decr[i-1]));
    }

    cout << res << endl;
    return 0;
}