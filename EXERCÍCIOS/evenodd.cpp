#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;
int t,n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> t;

    while(t--){
        
        
        cin >> n;

        if(n != 0){
            if(n % 2)
                cout << "ODD ";
            else
                cout << "EVEN ";

            if(n < 0)
                cout << "NEGATIVE" << endl;
            else
                cout << "POSITIVE" << endl;
            
        }else{
            cout << "NULL" << endl;
        }

        
    }

    return 0;
}