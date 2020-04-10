#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 10001

int N[MAXN];

bool busca(int val, int n){
    for(int i = 0; i < n; i++){
        if(N[i] == val) return true;
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> N[i];
    }

    sort(N,N+n-1);
    
    int o;
    cin >> o;
    for(int i = 0; i < o; i++){
        int tmp;
        cin >> tmp;

        if(busca(tmp,n)){
            cout << "Sim" << endl;
        }else{
            cout << "Nao" << endl;
            
        }
    }




    return 0;
}