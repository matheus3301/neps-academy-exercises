#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> div;
    int soma = 0;

    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            div.push_back(i);  
            soma += i;
        } 

    }

    cout << div.size() << " divisor(es):";
    for(int i = 0; i < div.size(); i++){
        cout << " " << div[i];
    }
    
    cout << endl <<  "Soma de divisores = "<< soma << endl;
    if(div.size() == 2){
        cout << "Primo" << endl;
    }else{
        cout << "Nao primo" << endl;

    }


    return 0;
}