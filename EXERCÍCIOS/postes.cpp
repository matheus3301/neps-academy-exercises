#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int subs = 0;
    int cons = 0;

    int n;
    int tmp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;

        if(tmp < 50){
            subs++;
        }else if(tmp < 85){
            cons++;
        }
    }    

    cout << subs << " " << cons << endl;
    return 0;
}