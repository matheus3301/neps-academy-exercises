#include <iostream>

using namespace std;

int main(){
    //bino sempre escolhe par e cino sempre escolhe impar
    int bino,cino;

    cin >> bino >>cino;
    if((bino+cino)%2==0){
        cout << "Bino \n";
    }else{
        cout << "Cino \n";
    }

    return 0;
}