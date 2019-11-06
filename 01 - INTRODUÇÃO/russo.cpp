#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n; 
    cin >> n;

    int v[n];
    
    vector<int> res;

    for(int i = 0; i < n;i++){
        cin >> v[i];
    }

    int aux = 0;
    for(int i = 0; i < n;i++){
        
        for(int j = i; j < n; j++){
            if(v[j] < v[i]){
                res.push_back(v[i]);
            }
        }
        
    }
    
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }


    return 0;
}