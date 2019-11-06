#include <iostream>

using namespace std;

//verifica se o numero é positivo, negativo ou nulo
int main(){
    int n;
    cin >> n;

    if(n == 0){
        cout << "nulo\n";
    }else if(n > 0){
        cout << "positivo\n";
    }else{
        cout << "negativo\n";
    }

    return 0;
}