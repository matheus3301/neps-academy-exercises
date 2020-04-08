#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int val, n;
    cin >> val >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        val += tmp;

        if(val < 0){
            val = 0;
        }else if(val > 100){
            val = 100;
        }
    }

    cout << val << endl;
    return 0;
}