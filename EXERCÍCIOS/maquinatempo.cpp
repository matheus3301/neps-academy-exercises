#include <iostream>

using namespace std;

// if(c1 - c2 == 0){
//         cout << "S" << endl;
//         return 0;
//     }
//     if(c1 - c3 == 0){
//         cout << "S" << endl;
//         return 0;
//     }
//     if(c2 - c3 == 0){
//         cout << "S" << endl;
//         return 0;
//     }
//     if(c1 - c2+c3 == 0){
//         cout << "S" << endl;
//         return 0;
//     }
//     if(c2 - c1+c3 == 0){
//         cout << "S" << endl;
//         return 0;
//     }
//     if(c3 - c1+c2 == 0){
//         cout << "S" << endl;
//         return 0;
//     }


int main(){
    int c1,c2,c3;

    cin >> c1 >> c2 >> c3;

    if(c1 + c2 == c3){
        cout << "S" <<endl;
        return 0;
    }     
    if(c1 + c3 == c2){
        cout << "S" <<endl;
        return 0;
    }  
    if(c3 + c2 == c1){
        cout << "S" <<endl;
        return 0;
    }
    
    if(c1 == c2 ){
        cout << "S" <<endl;
        return 0;
    }      
    if(c1 == c3 ){
        cout << "S" <<endl;
        return 0;
    }
    if(c2 == c3 ){
        cout << "S" <<endl;
        return 0;
    } 



    cout << "N" <<endl;
    return 0;
}