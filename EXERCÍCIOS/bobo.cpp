#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 10010

pair<int, int> voto[MAXN];

int byvoto(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        voto[i].first = i;
        voto[i].second = a;

    }

    int carlos = voto[0].second;

    sort(voto,voto+n,byvoto);

    if(voto[0].second == carlos){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    

    return 0;
}