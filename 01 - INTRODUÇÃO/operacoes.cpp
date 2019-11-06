#include <iostream>

using namespace std;

int main(){
    char op;

    cin >> op;

    double vl1,vl2;

    cin>>vl1>>vl2;

    cout.precision(2);
    cout.setf(ios::fixed);


    if(op == 'M'){
        cout << vl1*vl2 <<"\n";

    }else{
        cout << vl1/vl2 <<"\n";

    }


    return 0;
}