#include <bits/stdc++.h>
#define INF 1e9
#define endl "\n"

using namespace std;

int n;
vector<int> vec;

void merge_sort(vector<int> &v){
    if(v.size() == 1) return;

    vector<int> u1,u2;

    for(int i = 0; i < v.size()/2; i++){
        u1.push_back(v[i]);
    } 
    for(int i = v.size()/2; i < v.size(); i++){
        u2.push_back(v[i]);
    }

    merge_sort(u1);
    merge_sort(u2);

    u1.push_back(-INF);
	u2.push_back(-INF);
    

    int ini1 = 0, ini2 = 0;

    for(int i = 0; i < v.size(); i++){
        if(u1[ini1] > u2[ini2]){
            v[i] = u1[ini1];
            ini1++;
        }else{
            v[i]=u2[ini2];
			ini2++;
        }
    }

    return;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;    
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        vec.push_back(tmp);
    }
    
    merge_sort(vec);

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    cout << endl;

    return 0;
}