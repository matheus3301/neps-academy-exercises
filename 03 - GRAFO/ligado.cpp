#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

set<int> adj[100010];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    int t, a, b;
    for(int i = 0; i < m; i++){

        cin >> t >> a >> b;
        
        if(t == 1){

            adj[a].insert(b);
            adj[b].insert(a);

        }else{
            if(adj[a].find(b) != adj[a].end()){
                cout << "1" << endl;
            }else{
                cout << "0" << endl;
            }
        }
    }

    

    return 0;
}