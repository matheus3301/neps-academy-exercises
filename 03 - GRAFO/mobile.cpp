#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n;
vector<int> adj[100010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        adj[a].push_back(b);
    }
    


    return 0;
}