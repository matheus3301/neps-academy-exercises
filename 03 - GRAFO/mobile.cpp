#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

vector<int> mobile[100010];
bool visitado[100010];

bool calcula(int n = 0){
    visitado[n] = true;
    for(int mob : mobile[n]){
        if(visitado[n]) continue;
        dfs()
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        mobile[b].push_back(a);
    }

    bool calc = calcula();


    return 0;
}