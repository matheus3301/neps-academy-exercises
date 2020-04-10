#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout.precision(2);
    cout.setf(ios::fixed);


    int n;
    cin >> n;

    double moeda = 100.;
    double tmp;
    cin >> tmp;

    double inicio = moeda * tmp;
    double fim = moeda;

    for(int i = 0; i < n-1; i++){
        cin >> tmp;
    }
    fim *= tmp;


    cout << fim - inicio << endl;
    return 0;
}