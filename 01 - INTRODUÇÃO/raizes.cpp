#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;

    cin >> n;

    cout.precision(4);
    cout.setf(ios::fixed);

    for(int i = 0; i < n; i++){
        double val;
        cin >> val;        
        cout << sqrt(val) <<" \n";

    }

    return 0;
}
