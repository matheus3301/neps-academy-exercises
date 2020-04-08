#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b ,c, d;

    cin >> a >> b >> c >> d;
    long long divisor = b*d/__gcd(b,d);
    long long dividendo  = ((divisor/b)*a)+((divisor/d)*c);

    long long spor = __gcd(divisor,dividendo);
    cout << dividendo/spor << " " << divisor/spor << endl;
    
    return 0;
}