#include <iostream>

using namespace std;

int main(){
    int alunos,monitores;

    cin >> alunos >> monitores;

    if(alunos + monitores > 50){
        cout << "N \n";
    }else{
        cout << "S \n";
    }


    return 0;
}