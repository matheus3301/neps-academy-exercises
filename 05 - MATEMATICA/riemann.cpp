#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

bool composto[12000010];
vector<long long> primon;

void crivo(){
    composto[1] = true;
    for(int i = 2; i <= 12000000; i++){
        if(!composto[i]){
            primon.push_back(i);
            for(int j = 2; j*i <= 12000000; j++){
                composto[i*j] = true;
            }
        }
        
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    crivo();

    cout << primon[n-1] << endl;
    return 0;
}