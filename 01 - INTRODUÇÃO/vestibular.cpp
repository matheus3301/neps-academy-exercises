#include <iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    string gabarito;
    cin>>gabarito;

    string res;
    cin>>res;

    int nota = 0;
    for(int i = 0; i < n; i++){
        if(gabarito[i] == res[i]){
            nota++;
        }
    }

    cout << nota << "\n";
    return 0;
}