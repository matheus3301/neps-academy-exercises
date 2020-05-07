#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n, t;
vector< pair<int, string> > pessoa;
vector<string> times[1010];

bool orderByForca(pair<int, string> a, pair<int, string> b){
    return a.first > b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> t;
    int h;
    string nome;
    
    for(int i = 0; i < n; i++){
        cin >> nome >> h;
        pessoa.push_back({h,nome});
    }

    sort(pessoa.begin(),pessoa.end(),orderByForca);

    for(int i = 0; i < n; i++){
        times[i % t].push_back(pessoa[i].second);
    }

    for(int i = 0; i < t; i++){
        sort(times[i].begin(),times[i].end());

        cout << "Time " << i+1 << endl;
        for(int j = 0; j < times[i].size(); j++){
            cout << times[i][j] << endl;
        }
        cout << endl;
    }


    return 0;
}