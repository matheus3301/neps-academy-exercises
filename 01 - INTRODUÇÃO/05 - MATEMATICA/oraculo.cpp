#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

long long n,k;
string s;
int t;

long long fato(long long n, long long k, long long i){
    if(n > k * i){
        return (n - k*i) * fato(n,k,i+1);
    }
    return 1LL;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> t;
    while(t--){
        cin >> s;
        int i;
        k = 0; n = 0;
        for(i = s.size()-1; i  >= 0; i--){
            if(s[i] == '!') k++;
            else break;
        }

        int inicio = i;
        for(int j = inicio; j >= 0; j--){
            n += (s[j] - '0')*pow(10,inicio - j);
        }

        cout << fato(n,k,0) << endl;
    }

    return 0;
}