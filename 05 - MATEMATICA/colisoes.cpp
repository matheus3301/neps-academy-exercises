#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int xai,yai,xaf,yaf;
    int xbi,ybi,xbf,ybf;
    cin >> xai>>yai>>xaf>>yaf;
    cin >> xbi>>ybi>>xbf>>ybf;

    if(xaf < xbi){
        cout << 0 << endl;
        return 0;

    }        
    if(xbf < xai){
        cout << 0 << endl;
        return 0;

    }

    if(xaf < xbi){
        cout << 0 << endl;
        return 0;

    }
    
    if(yaf < ybi){
        cout << 0 << endl;
        return 0;
    }
    
    if(ybf < yai){
        cout << 0 << endl;
        return 0;

    }

    if(xai > xbf){
        cout << 0 << endl;
        return 0;
    }

    if(xbi > xaf){
        cout << 0 << endl;
        return 0;
    }

    if(yai > ybf){
        cout << 0 << endl;
        return 0;
    }

    if(ybi > yaf){
        cout << 0 << endl;
        return 0;

    }
    
    cout << "1" << endl;
    return 0;
}