#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define endl "\n"

using namespace std;

int n, tmp;
vector<int> c;

int merge_sort(vector<int> &v){
    int inv = 0;

    if(v.size() == 1) return 0;

    vector<int> a, b;

    for(int i = 0; i < v.size()/2; i++){
        a.push_back(v[i]);
    } 
    for(int i = v.size()/2; i < v.size(); i++){
        b.push_back(v[i]);
    }

    inv += merge_sort(a);
    inv += merge_sort(b);

    a.push_back(1e9);
    b.push_back(1e9);

   int ini1 = 0, ini2 = 0;

   for(int i = 0; i < v.size(); i++){
       if(a[ini1] <= b[ini2]){
           v[i] = a[ini1];
           ini1++;
       }else{
           v[i] = b[ini2];
           ini2++;

           inv += a.size()-ini1-1;
       }
   }
    
    return inv;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    REP(i,0,n){
        cin >> tmp;
        c.push_back(tmp);
    }
    
    cout << merge_sort(c) << endl;

    return 0;
}