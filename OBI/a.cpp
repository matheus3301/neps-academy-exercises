#include <bits/stdc++.h>
#define endl "\n"
#define debug(x) cerr << #x << " : " << x << endl

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    n -= 5;
    cout << (n % 8) << endl;

    

    return 0;
}