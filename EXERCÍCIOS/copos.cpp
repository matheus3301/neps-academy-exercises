#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    int a = 0, b = 0 ,c = 0;
    char init;
    cin >> n >> init;

    if(init == 'A'){
        a = 1;
    }else if(init == 'B'){
        b = 1;
    }else{
        c = 1;
    }

    for(int i = 0; i < n; i++){
        int mov;
        cin >> mov;

        if(mov == 1){
            swap(a,b);
        }else if(mov == 2){
            swap(b,c);
        }else{
            swap(a,c);
        }

    }

    if(a == 1){
        cout << 'A' << endl;
    }else if(b == 1){
        cout << 'B' << endl;
    }else{
        cout << 'C' << endl;
    }
    return 0;
}