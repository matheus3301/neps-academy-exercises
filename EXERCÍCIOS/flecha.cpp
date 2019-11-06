#include <iostream>
#include <cmath>

using namespace std;

struct flecha{
    int x,y;
    double dis;

};

int main(){
    int n;
    cin >> n;

    int res = 0;

    flecha tiro[n];

    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;

        tiro[i].x = abs(x);
        tiro[i].y = abs(y);

        tiro[i].dis = (tiro[i].x*tiro[i].x + tiro[i].y*tiro[i].y );

        for(int j = 0; j < i; j++ ){
            if(tiro[j].dis <= tiro[i].dis){
                res++;
            }
        }




    }

    cout << res << "\n";

    return 0;
}


