#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int peca[10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    a = b = c = 0;

    long long n;
    cin >> n;

    for(int i = 1; i <= 5; i++)peca[i] = 0;

    for(long long i = 0; i < n; i++){
        int tmp;
        cin >> tmp;

        peca[tmp]++;
        
        if(peca[1] > 0 && peca[3] > 0 && peca[5] >0){
            peca[1]--;
            peca[3]--;
            peca[5]--;

            a++;
        }else if(peca[1] > 0 && peca[4] > 0){
            peca[1]--;
            peca[4]--;

            b++;
        } else if(peca[2] > 0 && peca[4] > 0){
            peca[2]--;
            peca[4]--;
            
            c++;
        }
    }

    
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;


    return 0;
}