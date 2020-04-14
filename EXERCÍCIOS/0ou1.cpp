#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cin >> a >> b >> c;

        if(a == b && a == c){
            cout << "*" << endl;
            return 0;
        }

        if(a == b && a != c){
            cout << "C" << endl;
            return 0;
        }

        if(a == c && a != b){
            cout << "B" << endl;
            return 0;
        }

        if(c == b && a != c){

            cout << "A" << endl;
            return 0;
        }

        cin >> a >> b >> c;
    


    return 0;
}



