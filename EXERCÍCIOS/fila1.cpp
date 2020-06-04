#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

bool is(long long n){
    if(n == 0 ) return false;
    if(( (n+1) & n) == 0){
        return true;
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    cout << (is(n)?"S":"N") << endl; 

    return 0;
}