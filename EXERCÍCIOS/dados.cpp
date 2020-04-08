#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int evt[12];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(evt,0,12);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;

        evt[tmp-1]++;
    }

    int maior = 0;
    for(int i = 0; i < 12; i++){
        if(evt[i] > maior){
            maior = evt[i];
        }
    }

    for(int i = 0; i < 12; i++){
        if(evt[i] == maior){
            cout << i+1 << " ";
        }
    }

    cout << endl;
    return 0;
}