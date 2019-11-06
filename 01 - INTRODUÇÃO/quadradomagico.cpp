#include <iostream>

using namespace std;

int main(){
    int lado;

    cin >> lado;

    int quadrado[lado][lado];

    for(int i = 0; i < lado; i++){
        for(int j = 0; j < lado; j++){
            cin>>quadrado[i][j];
        }
    }

    int sl[lado];
    int sc[lado];

    bool issquare = true;

    //coluna
    for(int i = 0; i<lado;i++){    
        sl[i] =0;    
        for(int j=0; j<lado;j++){
            sl[i] += quadrado[i][j];
        }
        
    }

    for(int i = 0; i<lado;i++){    
        sc[i] =0;    
        for(int j=0; j<lado;j++){
            sc[i] += quadrado[j][i];
        }
        
    }

    int somal = sl[0];
    for(int i = 0; i<lado;i++){
        if(somal != sl[i]){
            issquare = false;
            cout << -1 << "\n";
            return 0;
        }
    }    
    

    for(int i = 0; i<lado;i++){
        if(somal != sc[i]){
            issquare = false;
            cout << -1 << "\n";
            return 0;
        }
    }

    
    int diag = 0;
    for(int i = 0; i<lado;i++){
        for(int j = 0; j<lado;j++){
            if(i==j){
                diag += quadrado[i][j];
            }
        }
       
    }
    if(diag != somal){
        issquare = false;
        cout << -1 << "\n";
        return 0;

    }

    diag = 0;
    for(int i = lado-1; i>=0;i--){
        for(int j = lado-1; j>=0;j--){
            if(i==j){
                diag += quadrado[i][j];
            }
        }
       
    }
    if(diag != somal){
            issquare = false;
            cout << -1 << "\n";
            return 0;

    }





    cout << somal << "\n";
    return 0;
}