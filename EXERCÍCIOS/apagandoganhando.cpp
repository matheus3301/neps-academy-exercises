#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n, d;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> d;
    while(d != 0 && n != 0){
        string s;
        stack<char> pilha;
        cin >> s;

        for(char c : s){
            if(pilha.empty() || pilha.top() >= c){
                pilha.push(c);
            }else{
                while( (d > 0) && !pilha.empty() && pilha.top() < c){
                    pilha.pop();
                    d--;
                }
                pilha.push(c);
            }
        }

        while(d > 0){
            pilha.pop();
            d--;
        }

        string res;
        while(!pilha.empty()){
            res += pilha.top();
            pilha.pop();

        }
        
        reverse(res.begin(),res.end());

        cout << res << endl;
        cin >> n >> d;

    }

    return 0;
}