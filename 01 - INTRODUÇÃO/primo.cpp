#include <iostream>

using namespace std;

bool eh_primo(int x){
    if(x == 1){
        return false;
    }else{
        
            for(int i = 2; i < x/2; i++){
                if(x%i == 0){
                    return false;
                    break;
                }
            }

            return true;
        
        
    }

   
}

int main(){
    int x;

    cin>>x;

    if(eh_primo(x)){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }
}