#include <iostream>
#include <algorithm>

using namespace std;

struct Con{
    int inicio;
    int fim;
    int duracao;
    int pos;
};

int realizavel(Con a[],int n){
    int count = 0;
    for(int i = 1; i < n; i++){
        if(a[i].pos != 1 && a[i-1].fim <= a[i].inicio){
            a[i].pos =1;
            count++;
        }
    }

    //cout << count;

    

}

int order(Con a, Con b){
    return a.duracao < b.duracao;
}

int main(){
    int n;
     cin >> n;

     Con cons[n];

     int max = 0;

     for(int i = 0; i < n; i++){
         int init,fim;

         cin >> init >> fim;

         cons[i].inicio = init;
         cons[i].fim = fim;
         cons[i].duracao = fim - init;

     }
     sort(cons, cons+n,order);

     for(int i = 0; i < n; i++){
         cout << cons[i].duracao << " ";
     }
    //  cons[0].pos = 1;
    //  realizavel(cons,n);



    return 0;
}