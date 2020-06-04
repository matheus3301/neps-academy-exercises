#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int b,reserva[21],n,d,c,v,aux=0;
    while(true){

        cin >> b >> n;
        
        if(b==0 && n == 0){
            break;
        }

        for(int i = 1;i<= b;i++){
            cin >> reserva[i];
        }
        
        for(int i = 1;i<=n;i++){
            cin >> d >> c >> v;

            reserva[d]=reserva[d] - v;
            reserva[c]=reserva[c] + v;
        }

        aux = 0;
        for(int i = 1; i <= b;i++){
            
            if(reserva[i] < 0){
                aux += 1;
            }

            
        }

        if( aux == 0 ){
                cout << "S\n";
        }else{
                cout << "N\n";
        }
        
    }
    return 0;
}
