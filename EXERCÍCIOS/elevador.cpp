#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n;
int p[10010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> p[i];

    sort(p,p+n);

    
    if(p[0] > 8){
        cout << "N" << endl;
        return 0;
    }
    
    for(int i = 1; i < n; i++){
        if(p[i] - p[i-1] > 8){
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;
    return 0;
}