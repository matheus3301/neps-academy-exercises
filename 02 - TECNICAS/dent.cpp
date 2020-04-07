#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;



bool ordena(ii a, ii b){
    return a.second <b.second;
}

int main(){
    int n;
    int x,y;

    cin >> n;
    
    ii consulta[n];
   

    for(int i = 0; i < n; i++){
        cin >> x >> y;          
        consulta[i] = make_pair(x,y);
    }

    int ultima=0,res=0;
    sort(consulta,consulta+n,ordena);
    for(int i = 0; i < n; i++){
        if(consulta[i].first >= ultima){
            res++;
            ultima = consulta[i].second;
        }
    }

    cout << res << endl;


    return 0;
}