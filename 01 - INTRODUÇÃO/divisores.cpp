#include <iostream>

using namespace std;

int main(){
    int val;

    cin >> val;
    for(int i = 1; i <= val;i++){
        if(val % i == 0){
            cout<<i<<" ";
        }
    }
    cout <<"\n";
    return 0;
}