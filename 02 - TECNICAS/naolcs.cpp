#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

int n,m;
unordered_map<int,int> s1;

vector<int> seq;

int lis(){
    vector<int> pilha;
    for(int i = 0; i < seq.size(); i++){

        vector<int>::iterator it = lower_bound(pilha.begin(),pilha.end(),seq[i]);

        if(it == pilha.end()){
            pilha.push_back(seq[i]);
        }else{
            *it = seq[i];
        }
    }

    return (int)pilha.size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        s1[tmp] = i;
    }

    for(int i = 0; i < m; i++){
        cin >> tmp;
        if(s1.find(tmp) != s1.end()){
            seq.push_back(s1[tmp]);
        }
    }

    cout << lis() << endl;

    

    return 0;
}