#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

queue<char> times;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(char c = 'A'; c <= 'P'; c++){
        times.push(c);
    }    

    int a , b;
    while(times.size() > 1){
        char ta = times.front();
        times.pop();

        char tb = times.front();
        times.pop();

        cin >> a >> b;
        if(a > b){
            times.push(ta);
        }else{
            times.push(tb);

        }
    }

    cout << times.front() << endl;

    return 0;
}