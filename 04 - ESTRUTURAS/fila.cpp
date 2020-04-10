#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

vector<int> fila;

int busca(int x, int inicio, int fim){
    if(inicio <= fim){
        int meio = inicio+((fim-inicio)/2);

        if(fila[meio] == x){
            return meio;
        }else if(fila[meio] > x){
            return busca(x,inicio, meio-1);
        }else{
            return busca(x,meio+1, fim);
        }
    }

    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n,m;
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;

        fila.push_back(tmp);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        int tmp;
        cin >> tmp;

        fila.erase(fila.begin()+busca(tmp,0,fila.size()));
        
    }

    for(int i = 0; i < fila.size(); i++){
        cout << fila[i] << " ";
    }
    cout<<endl;



    return 0;
}