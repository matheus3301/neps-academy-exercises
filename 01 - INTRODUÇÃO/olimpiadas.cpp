#include <iostream>
#include <algorithm>

using namespace std;

struct Pais{
    int id;
    int ouro;
    int prata;
    int bronze;

};

bool ordena(Pais a, Pais b){

    if(a.ouro != b.ouro)
		return a.ouro > b.ouro;
	else if(a.prata != b.prata)
		return a.prata > b.prata;
	else if(a.bronze != b.bronze)
		return a.bronze > b.bronze;
	return a.id < b.id;

}

int main(){
    int n,m;
    
    cin>>n>>m;

    Pais pais[n];

    for(int i = 0; i < n; i++){
        pais[i].id = i+1;
        pais[i].ouro = 0;
        pais[i].prata = 0;
        pais[i].bronze = 0;

    }

    for(int i = 0; i < m; i++){
        int ouro,prata,bronze;
        cin >> ouro >> prata >> bronze;

        pais[ouro-1].ouro++;
        pais[prata-1].prata++;    
        pais[bronze-1].bronze++;    

    }

    

    sort(pais, pais + n, ordena);

    for(int i = 0; i < n; i++){
        cout << pais[i].id << " ";
    }
    cout << "\n";

    return 0;
}