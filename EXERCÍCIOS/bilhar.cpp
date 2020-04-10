#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;

    set<long long> taco;


    int res = 0;
    for(int i = 0; i < c; i++){
        long long tmp;
        cin >> tmp;
        if(!taco.count(tmp)){
            taco.insert(tmp);
            res += 2;
        }else{
            taco.erase(tmp);
        }
    }

    cout << res << endl;

    return 0;
}