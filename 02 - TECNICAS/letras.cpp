#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"

using namespace std;

typedef long long ll;

string s;


int solve(){
    vector<char> pilha;
    for(int i = 0; i < s.size(); i++){
        vector<char>::iterator it = upper_bound(pilha.begin(),pilha.end(),s[i]);
        if(it == pilha.end())
            pilha.push_back(s[i]);
        else
            *it = s[i];
    }

    return (int)pilha.size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> s;
    cout << solve() << endl;

    return 0;
}