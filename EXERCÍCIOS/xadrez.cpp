#include <iostream>

using namespace std;

bool par(int x){
    if(x%2==0){
        return true;
    }else{
        return false;
    }
} 

int main(){
    int l,c;
    cin >> l >> c;

    if(par(l) == par(c)){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;

    }


    return 0;
}