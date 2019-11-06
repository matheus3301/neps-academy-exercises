#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> aeroporto[105];


int main(){

    int a,v;

    int conta = 1;
        
    while(cin >> a >> v && a != 0 && v != 0){
        for(int i = 0; i < v; i++){
            int x,y;

            cin >> x >> y;

            aeroporto[x-1].push_back(y);
            aeroporto[y-1].push_back(x);


        }


        int maior = 0;

        for(int i = 0; i < a; i++){
            if(aeroporto[i].size() > maior){
                maior = aeroporto[i].size();
            }
        }

        cout << "Teste " << conta << "\n";
        for(int i = 0; i < a; i++){
            if(aeroporto[i].size() == maior){
                cout << i+1 << " ";
            }
        }
    
        cout << "\n\n";

        for(int i = 0; i < a; i++){
            
            aeroporto[i].clear();
            
        }

        conta++;
    }

    return 0;
}