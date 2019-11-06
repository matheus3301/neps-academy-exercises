#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cin >> a >> b >> c;

    if(a == b && a == c){

        cout << "*";
        return 0;
    }


    if(a == b && a != c){

        cout << "C";
        return 0;
    }

    if(a == c && a != b){

        cout << "B";
        return 0;
    }

    if(c == b && a != c){

        cout << "A";
        return 0;
    }


    return 0;
}



