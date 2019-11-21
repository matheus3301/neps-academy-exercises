//EXERCÍCIO NEPS ACADEMY
//Autor: Matheus Rocha
//Nome do Exercício: Matryoshka
//Id do Exercício: 246

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    long long bonecas[n];
    long long original[n];

    vector<long long> dif;

    for(int i = 0; i < n; i++){
        cin >> bonecas[i];
        original[i] = bonecas[i];
    }

    sort(bonecas,bonecas+n);

    for(int i = 0; i < n; i++){
        if(bonecas[i] != original[i]){
            dif.push_back(original[i]);
        }
    }

    sort(dif.begin(),dif.end());

    cout << dif.size() << endl;

    for(int i = 0; i < dif.size(); i++){
        cout << dif[i] << " ";
    }

    cout << endl;







    return 0;
}