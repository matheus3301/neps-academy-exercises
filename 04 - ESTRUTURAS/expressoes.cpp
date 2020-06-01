#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve(){
    string s;
    stack<char> pilha;

    cin >> s;
    for(char c : s){
        if(c == '{' || c == '[' || c == '('){
            pilha.push(c);
        }else if((!pilha.empty()) && ((c == '}' && pilha.top() == '{') || (c == ')' && pilha.top() == '(') || (c == ']' && pilha.top() == '['))){
            pilha.pop();
        }else{
            cout << "N" << endl;
            return;
        }
    }

    if(pilha.size()){
        cout << "N" << endl;
    }else{
        cout << "S" << endl;        
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    

    return 0;
}