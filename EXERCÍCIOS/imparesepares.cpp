#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> impar;
    vector<int> par;

    int tmp;
    for(int i = 0; i < 10; i++){
        cin >> tmp;

        if(tmp% 2 == 0){
            par.push_back(tmp);
        }else{
            impar.push_back(tmp);
        }
    }

    for(int i = 0; i < par.size(); i++)
        cout << par[i] << " ";

    cout << endl;    


    for(int i = 0; i < impar.size(); i++)
        cout << impar[i] << " ";

    cout << endl;
    return 0;
}