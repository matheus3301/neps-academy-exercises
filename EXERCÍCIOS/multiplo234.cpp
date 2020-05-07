#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int m2,m3,m4;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int n;
    int val;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> val;

        if(val%2 == 0){
            m2++;
        }

        if(val%3 == 0){
            m3++;
        }


        if(val%4 == 0){
            m4++;
        }
    }

    cout << m2 << endl;
    cout << m3 << endl;
    cout << m4 << endl;



    

    return 0;
}