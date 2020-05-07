#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int a[50010], n;

int maior = INT32_MIN;

pair<int,int> melhor[50010];

bool orderna(pair<int,int> a,pair<int,int> b){
    return a.first > b.first;
}

bool valido(int val){
    if(val < 0 || val >= n) return false;
    return true;
}

bool isIso(int i, int val){

    for(int j = 1; j < val; j++){
        if(!valido(i+j) || !valido(i-j) || a[i+j] < val - j || a[i-j] < val - j){
            return false;
        }    
    }

    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];

        melhor[i].first = a[i];
        melhor[i].second = i;


    }
    
    sort(melhor,melhor+n, orderna);

    for(int i = 0; i < n; i++){
        cout << "Testando" << melhor[i].first << endl;
        if(melhor[i].first <= maior) break;
        for(int j = melhor[i].first; j >= 0; j--){
            if(isIso(melhor[i].second,j)){
                maior = max(maior, j);
            }
        }
        
    }

    cout << maior << endl;

    return 0;
}