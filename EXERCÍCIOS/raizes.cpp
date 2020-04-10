#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    cout.precision(4);
    cout.setf(ios_base::fixed);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        double tmp;
        cin >> tmp;

        cout << sqrt(tmp) << endl;
    }


    return 0;
}