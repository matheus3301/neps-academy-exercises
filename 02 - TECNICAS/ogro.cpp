#include <bits/stdc++.h>

using namespace std;

#define MAXN 100010

int p[MAXN];
long long a[MAXN];
long long o[MAXN];

int n, m;


int pontuacao(int forca){
	int ini = 0, fim  = n;

	while(fim-ini > 1){
		int med = (fim + ini)/2;
		if(a[med] <= forca){
			ini = med;
		}
		else{
			fim = med;
		}
	}
	return p[fim-1];
}

int main(){

    cin >> n >> m;
    for(int i = 1; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
         cin >> p[i];
    }
    for(int i = 0; i < m; i++){
        cin >> o[i];
    }

    for(int i = 0; i < m; i++){
        cout << pontuacao(o[i]) << " ";
    }
    cout << endl;

    return 0;
}