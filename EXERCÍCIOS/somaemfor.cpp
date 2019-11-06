#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int res = 0;

    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        res += val;

    }

    cout << res << endl;

    return 0;
}