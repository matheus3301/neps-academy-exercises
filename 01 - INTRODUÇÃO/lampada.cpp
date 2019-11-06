#include <iostream>

using namespace std;

int main(){
    int l1=0;
    int l2=0;

    int ev;

    cin >> ev;

    for(int i = 0; i < ev;i++){
        int it;

        cin >> it;
        
        if(it == 1){
           if( l1 == 0){
               l1 = 1;
               

           }else{
               l1 = 0;
               

           }
        }else{
            if( l1 == 0){
               l1 = 1;
               

           }else{
               l1 = 0;
               

           }

           if( l2 == 0){
               l2 = 1;
               

           }else{
               l2 = 0;
               

           }
        }
         
    }

    cout << l1 <<" \n" << l2 << "\n";

    return 0;
}