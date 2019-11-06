#include <iostream>

using namespace std;

int main(){
    int val1;
    int val2;

    cin>>val1>>val2;

    double media = (val1 +val2)/2;
    
    cout.precision(0);
    cout.setf(ios::fixed);

    cout << media<<" \n";

    return 0;
}