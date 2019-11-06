#include <iostream>

using namespace std;

int main(){
    int over;

    int vl1,vl2;

    char op;

    cin >>over >> vl1 >> op >> vl2;

    if(op == '+'){
        if(vl1 + vl2 > over){
            cout << "OVERFLOW\n";
        }else{

            cout << "OK\n";
        }
    }else{
        if(vl1 * vl2 > over){
            cout << "OVERFLOW\n";
        }else{

            cout << "OK\n";
        }
    }


    return 0;
}