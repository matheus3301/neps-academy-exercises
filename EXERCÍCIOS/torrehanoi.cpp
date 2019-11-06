#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i = 1;
    while(true){
        int n;
        cin >> n;

        if(n == 0){
            return 0;
        }else{
            cout << "Teste "<<i<<endl;
            int res = pow(2,n) - 1;
            cout << res << endl;
            cout << endl;

        }


        i++;

    }


    return 0;
}