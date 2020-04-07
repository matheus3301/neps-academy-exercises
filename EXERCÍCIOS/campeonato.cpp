#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cv, ce, cs, fv, fe, fs;
    int pc = 0, pf = 0;
    
    cin >> cv >> ce >> cs >> fv >> fe >> fs;

    pc += cv  * 3;
    pf += fv  * 3;

    pc += ce  * 1;
    pf += fe  * 1;

    if(pc > pf){
        cout << "C" << endl;
    }else if(pf > pc){
        cout << "F" << endl;
    }else{
        if(cs > fs){
            cout << "C" << endl;
        }else if(fs > cs){
            cout << "F" << endl;
        }else{
            cout << "=" << endl;

        }
    }

    return 0;
}