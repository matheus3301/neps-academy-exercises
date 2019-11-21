//NOT COMPLETED

#include <iostream>
#include <algorithm>

using namespace std;

bool isEqual(){

}

int main(){
    

    long long n;
    long long e;

    int circulo[n];
    int initial[n];
    
    for(long long i =0; i < n; i++){
        circulo[i] = 0;
    }

    for(long long i =0; i < e;i++){
        int pos;
        cin >> pos;
        pos--;

        cin >> circulo[pos];
        initial[pos] = circulo[pos];
    }

    int tambor = 0;

    do{
        tambor++;

        for(long long i=0;i<n;i++){
            if(circulo[i] == -1){
                if(circulo[i] == 0){
                    if(circulo[n-1] == 1){
                        circulo[n-1] = -1;
                        circulo[i] = 1;
                    }else{

                    }
                }else{

                }
            }

            if(circulo[i] == 1){
                
            }
        }

    }while(!isEqual());

    cout << tambor << endl;

    return 0;
}