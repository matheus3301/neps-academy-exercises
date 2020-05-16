#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int charToInt(char a){
    return a - '0';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if(charToInt(s.back()) % 2 == 0 )
        cout << "S" << endl;
    else
        cout << "N" << endl;
    
    long long soma = 0;
    for(int i = 0; i < s.size();i++)
        soma += charToInt(s[i]);
    
    if(soma % 3 == 0)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    if(charToInt(s.back()) % 5 == 0 )
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}