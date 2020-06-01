#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n;
map<int, pair<char, int> > p;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;


    for(int i = 0; i < n; i++){
        int e,d;
        char c;
        cin >> e >> c >> d;
        p[e] = {c, d};

    }

    int i = 0;
    while(i != 1){
        cout << p[i].first;
        i = p[i].second;
    }

    cout << endl;

    return 0;
}