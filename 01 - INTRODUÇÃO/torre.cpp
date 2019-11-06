#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;


    int tab[n][n];
    int peso = 0;

    int sl[n];
    int sc[n];

    for(int i = 0;i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> tab[i][j];
        }
    }


    for(int i = 0;i<n;i++){
        sl[i] =0;
        for(int j = 0;j<n;j++){
            sl[i]+=tab[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        sc[i] =0;
        for(int j = 0;j<n;j++){
            sc[i]+=tab[j][i];
        }
    }




    for(int i = 0;i<n;i++){        
        for(int j = 0;j<n;j++){
           if(sc[j] + sl[i] - 2*(tab[i][j]) > peso){
               peso = sc[j] + sl[i] - 2*(tab[i][j]);
           }
        }
    }
    

    cout << peso << "\n";
    return 0;
}