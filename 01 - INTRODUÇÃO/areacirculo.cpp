#include <iostream>

using namespace std;

int main(){
    //area do circulo é pi*r*r
    double pi = 3.1416;
    int raio;
    cin >> raio;
    double area = raio*raio*pi;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<area<<"\n";
    return 0;
}