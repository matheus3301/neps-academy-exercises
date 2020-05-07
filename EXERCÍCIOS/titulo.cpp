#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

string title(string s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        if(s[i-1] == ' ')s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);        
    }
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string S;
    getline(cin, S);

    string res = title(S);
    
    cout << res << endl;

    return 0;
}