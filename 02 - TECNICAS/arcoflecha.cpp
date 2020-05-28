#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define endl "\n"

using namespace std;

int n,x,y,ans;
vector<long long> dist;

int merge_sort(vector<long long> &v){
    int inv = 0;
    if (v.size() == 1) return 0;

    vector<long long> u1,u2;

    for(int i = 0; i < v.size()/2; i++){
        u1.push_back(v[i]);
    } 
    for(int i = v.size()/2; i < v.size(); i++){
        u2.push_back(v[i]);
    } 

    inv += merge_sort(u1);
    inv += merge_sort(u2);

    u1.push_back(-1e9);
    u2.push_back(-1e9);

    int ini1 = 0, ini2 = 0;

    for(int i = 0; i < v.size(); i++){
        if(u1[ini1] >= u2[ini2]){
            v[i] = u1[ini1];
            ini1++;
        }else{
            v[i] = u2[ini2];
            ini2++;

            inv += u1.size()-ini1-1;
        }
    }

    return inv;


}

long long calc(int x, int y){
    return x*x + y*y;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n; 
    REP(i,0,n){
        cin >> x >> y;
        dist.push_back(calc(x,y));

        cout << merge_sort(dist) << endl;;
    }

    cout << ans << endl;

    return 0;
}