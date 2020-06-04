#include <bits/stdc++.h>

#define endl "\n"
#define x first
#define y second

using namespace std;


typedef long long ll;
typedef pair<ll,ll> ponto;


int n;
ponto a[300010];
vector<ponto> pilha;

bool pos(ponto a, ponto b, ponto c){
    ponto va = ponto(a.x-b.x,a.y-b.y);
    ponto vb = ponto(c.x-b.x,c.y-b.y);

    ll produto_vetorial = va.x*vb.y - va.y*vb.x;

    if(produto_vetorial <= 0) return true;
    return false;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int h, p;
    for(int i = 0; i < n; i++){
        cin >> p >> h;
        a[i] = {p,h};
    }    

    sort(a,a+n);
    
    for(int i = 0; i < n; i++){
        ponto p = a[i];

        while(pilha.size() > 1){

            int ultimo = pilha.size() -1;
            int pultimo = pilha.size() - 2;

            if(pos(pilha[pultimo], pilha[ultimo], p)) pilha.pop_back();
            else break;
        }

        pilha.push_back(p);
    }
    

    
    cout << pilha.size()-1 << endl;

    return 0;
}