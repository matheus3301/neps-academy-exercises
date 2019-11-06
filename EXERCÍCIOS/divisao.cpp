#include <iostream>

using namespace std;

int main(){
    double a,b;

    cin >> a >> b;

    double res = a/b;


    cout.precision(2);
    cout.setf(ios::fixed);


    cout << res  << "\n";


    return 0;
}