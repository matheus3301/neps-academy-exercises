#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double base,exp;

    cin >> base >> exp;

    cout.precision(4);
    cout.setf(ios::fixed);
    cout << pow(base,exp) << "\n";

    return 0;
}
