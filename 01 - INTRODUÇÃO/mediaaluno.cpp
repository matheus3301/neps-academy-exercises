//caso o aluno tenha media final maior ou igual a 7 ele é aprovado, menor que 7 mas maior igual que 4
//está de recuperação e menor que 4 está reprovado

#include <iostream>

using namespace std;

int main(){

    double n1,n2;

    cin >> n1 >> n2;

    double media = (n1 + n2)/2;

    if(media >= 7){
        cout << "Aprovado\n";
    }else if(media >= 4){
        cout << "Recuperacao\n";
    }else{
        cout << "Reprovado\n";

    }

    return 0;
}