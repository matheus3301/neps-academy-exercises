#include <iostream>

using namespace std;

int main(){
    int c1, c2, p1,p2;

    cin >> p1 >> c1 >> p2 >> c2;

    //verificando se está equilibrada
    if(p1*c1 == p2*c2){
        cout << 0 << "\n";
    }else{
        if(p1*c1 > p2*c2){
            cout << -1 << "\n";
        }else{
            cout << 1 << "\n";

        }
    }



    return 0;
}