#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int A, B;

set<int> a, b, total;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >>A >> B;
    int tmp;
    for(int i = 0; i < A; i++){
        cin >> tmp;
        a.insert(tmp);
        total.insert(tmp);
    }

    for(int i = 0; i < B; i++){
        cin >> tmp;
        b.insert(tmp);
        total.insert(tmp);
    }

    for(auto x : total){
        if(a.count(x) && b.count(x)){
            a.erase(x);
            b.erase(x);

        }
    }

    cout << min(a.size(),b.size()) << endl;
    
    return 0;
}