#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n,c,m;

#define MAXN 110

int carimbo[MAXN];
int figura[MAXN];



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> c >> m;
    for(int i = 0; i < c; i++){
        cin >> carimbo[i];
    }

    for(int i = 0; i < m; i++){
        int tmp;
        cin >> tmp;

        figura[tmp]++;
    }
    
    int res = 0;

    for(int i = 0; i < c; i++){
        if(figura[carimbo[i]] == 0) res++;
    }

    cout << res << endl;
    return 0;
}