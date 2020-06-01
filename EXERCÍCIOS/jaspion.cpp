#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve(){
    int m, n;
    map<string, string> trad;

    

    cin >> m >> n;

    cin.ignore();

    for(int i = 0; i < m; i++){
        string original, final;
        getline(cin, original);
        getline(cin, final);

        trad[original] = final;
    }

    for(int i = 0; i < n; i++){
        string linha, palavra;
        
        getline(cin,linha);
        stringstream stream(linha);
        while(stream >> palavra){
            if(trad.count(palavra)){
                cout << trad[palavra] << " ";
            }else{
                cout << palavra << " ";
            }
        }

        cout << endl;
        
    }

    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    } 
    

    return 0;
}