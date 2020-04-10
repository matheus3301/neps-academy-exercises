#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int dinheiro[] = {100,50,25,10,5,1};

long long n;
int res = 0;

void subtrai(){
    for(int i = 0; i < 6; i++){
        if(n >= dinheiro[i]){
            n -= dinheiro[i];
            res++;
            if(n > 0){
                subtrai();
            }

            break;
        }
    }
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    
    cin >> n;
    subtrai();

    cout << res << endl;
}