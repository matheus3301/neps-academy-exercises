#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

vector<int> fila;

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
    set<int> sai;
    for(int i = 0; i < m; i++){
        int tmp;
        cin >> tmp; 
    
        sai.insert(tmp);
    }

    for(int i = 0; i < n; i++){
        if(sai.find(fila[i]) == sai.end()){
            cout << fila[i] << " ";
        }
    }
    cout<<endl;



    return 0;
}