#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int a[4];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int maior = 0;
    int local = 0;

    for(int i = 1; i <= 3; i++){
        cin >> a[i];       
    }
    
    int res[4] = {0,0,0,0};

    res[1] += a[3] * 4;
    res[1] += a[2] * 2;
    
    res[2] += a[1] * 2;
    res[2] += a[3] * 2;
        
    res[3] += a[1] * 4;
    res[3] += a[2] * 2;

    int menor = INT32_MAX;

    for(int i = 1; i<=3; i++){
        if(res[i] < menor) menor = res[i];
    }

    cout << menor << endl;
    
    return 0;
}