#include <iostream>

using namespace std;

int num[41];

bool div(long long atual, int lim){
    for(int i = 0; i < lim; i++){
        if(atual % num[i] == 0) return false;
    }

    return true;
}


int main(){
    long long  n;
    int  k;

    cin >> n >> k;

    long long  res = 0;

    for (int i = 0; i < k; i++){
        cin >> num[i];
    }

    for(long long  i = 1; i <= n; i++){
        if(div(i,k)){
            res++;
        }
    }


    cout << res << "\n";
    



    return 0;
}