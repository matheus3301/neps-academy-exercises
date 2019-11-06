#include <iostream>

using namespace std;

string title(string F){
    for(int i = 0; i < F.size();i++){
        if(i == 0 || F[i-1] == ' '){
            F[i] = toupper(F[i]);
        }else{
            F[i] = tolower(F[i]);

        }
    }

    return F;
}

int main(){ 
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}