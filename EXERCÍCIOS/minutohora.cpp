#include <iostream>

using namespace std;

int main(){
    int min;
    cin >> min;

    int hora = min/60;
    int resto = min%60;

    cout << hora << endl;
    cout << resto << endl;

    return 0;
}