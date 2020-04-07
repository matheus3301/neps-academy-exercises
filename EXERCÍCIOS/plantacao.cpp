#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAX 100010

long long arvore[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    long long res = 0;
    long long soma = 0;

    cin >> n >> k;

    for(long long i = 0; i < k; i++){
        cin >> arvore[i];
    }
    

    for(long long i = 0; i < n; i++){
        
        char noite;
        cin >> noite;



        if(noite == 'C'){
            for(long long j = 0; j < k; j++){
                if(arvore[j] > 0){
                    arvore[j]++;
                    res+= arvore[j];

                } 
            }
        }else{
            for(long long j = 0; j < k; j++){
                if(arvore[j] > 0){
                    arvore[j]--;
                    res+= arvore[j];

                } 
            }
        }
       

       
    }

    
    cout << res << endl;

    return 0;
}