#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int escala[] = {1,3,5,6,8,10,12};
string nota[] = {"do","do#","re","re#","mi","fa","fa#","sol","sol#","la","la#","si","desafinado"};
int ans,n;
vector<int> seq;

bool checa(int i){
    for(int j = 0; j < 7; j++){
            
            if(seq[j] != (escala[j]+i)%12) return false;

    }

    return true;    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        tmp = tmp%12;

        if(tmp == 0) tmp = 12;

        if(!binary_search(seq.begin(),seq.end(),tmp))
            seq.push_back(tmp);
    }    
    
    for(int i = 0; i < 12; i++){
        
        if(checa(i)){
            cout << nota[i] << endl;
            return 0;
        }

        
    }

    cout << nota[12] << endl;
    
    return 0;
}