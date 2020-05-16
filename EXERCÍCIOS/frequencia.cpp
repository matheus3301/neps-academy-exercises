#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n, ans;

set<int> v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    long long tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.insert(tmp);
    }

    cout << v.size() << endl;
    

    return 0;
}