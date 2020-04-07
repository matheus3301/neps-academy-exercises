#include <iostream>
#include <cmath>

#define DIV 1000000007
#define MAXN 10010

using namespace std;



long long int op(long long int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    if(n == 2) return 5; 

    
}

int main(){
    long long int n;

    cin >> n ;

    long long int res = op(n);
    cout << res << endl;
}