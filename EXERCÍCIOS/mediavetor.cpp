#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n, v[100100];



double media(){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
    }   
    return (double)sum/n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> v[i];

    cout << setprecision(2) << fixed;
    cout << media() << endl;

    

    return 0;
}