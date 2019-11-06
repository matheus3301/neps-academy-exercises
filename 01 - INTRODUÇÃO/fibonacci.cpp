#include <iostream>

using namespace std;

int fib(int old, int atual, int limit){
    
    if(limit == 0){
        return atual;

    }else{
        int aux; 

        aux = atual;
        atual = old +atual;
        old = aux;

        limit--;

        fib(old,atual,limit);
    }
    
}

int main(){
    int i;
    cin >> i;

    cout << fib(1,2,i-2) << "\n";

}
