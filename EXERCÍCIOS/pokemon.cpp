#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int pok[3];

    int doces;

    cin >> doces;

    for(int i = 0; i < 3 ; i++){
        cin >> pok[i];

    }

    sort(pok,pok+3);
    int res = 0;

    for(int i = 0; i < 3; i++){
        if(pok[i] <= doces){
            res++;
            doces -= pok[i];
        }else{
            break;
        }
    }

    cout << res << "\n";
    return 0;
}