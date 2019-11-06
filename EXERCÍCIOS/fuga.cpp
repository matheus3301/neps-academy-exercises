#include <iostream>

using namespace std;

int main(){ 

    int heli,pol,fug,dir;

    cin >> heli >> pol >> fug >> dir;

    if(dir == 1){
        
        while(true){
            if(fug == pol){
                cout << "N\n";
                break; 
            }

            if(fug == heli){
                cout << "S\n";
                break; 
            }



            if(fug == 15){
                fug = 0;
            }else{
                fug++;
            } 
        }
    }else{
        while(true){

             if(fug == pol){
                cout << "N\n";
                break; 
            }

            if(fug == heli){
                cout << "S\n";
                break; 
            }



            if(fug == 0){
                 fug = 15;
            }else{
                fug--;
            }

        }
    }
    

    return 0;
}