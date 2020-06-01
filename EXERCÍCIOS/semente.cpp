#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXF 100010

int fita[MAXF];

int f, r, ans;
int menor, maior, dist;

bool check(){
    for(int i = 1; i <= f; i++)
        if(fita[i] == 0) return false;

    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> f >> r;

    maior = 0, menor = f;

    int tmp;
    for(int i = 1; i <= r; i++){
        cin >> tmp;
        maior = max(tmp,maior);
        menor = min(tmp,menor);

        fita[tmp]++;        
    }
    
    int ultimo = menor;
    for(int i = 1; i <= f; i++){
        if(fita[i] > 0){
            dist = max(dist,i - ultimo);
            ultimo = i;
        }
    }

    cout << max(max(f - maior,menor - 1), dist/2) << endl;

    return 0;
}