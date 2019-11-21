//EXERCÍCIO NEPS ACADEMY
//Autor: Matheus Rocha
//Nome do Exercício: Formula 1
//Id do Exercício: 245


#include <iostream>
#include <vector>

using namespace std;

int main(){

	while(true){

	int nGp, nPil;
	cin >> nGp >> nPil;
	if(nGp == 0 && nPil == 0)return 0;

	int resultado[nGp][nPil];
	for(int i = 0; i < nGp; i++){
		for(int j = 0; j < nPil; j++){
			cin >> resultado[i][j];
		}
	}	

	int nSis;
	cin >> nSis;

	int sistema[nSis][nPil];

	for(int i = 0; i < nSis; i++){
		for(int j = 0; j < nPil; j++){
			sistema[i][j] = 0;
		}
	}

	for(int i = 0; i < nSis; i++){
		int k;
		cin >> k;
		for(int j = 0; j < k; j++){
				cin >> sistema[i][j];
		}
	}


	int final[nSis][nPil];

	for(int i = 0; i < nSis; i++){
		for(int j = 0; j < nPil; j++){
			final[i][j] = 0;
		}
	}


	for(int i = 0; i < nSis; i++){
		for(int j = 0; j < nPil; j++){
			for(int k = 0; k < nGp; k++){
				final[i][j] += sistema[i][(resultado[k][j])-1];
				//cout << "SOMANDO ->" << sistema[i][(resultado[k][j])-1] << endl;

			}
		}
	}

	for(int i = 0; i < nSis; i++){
		int maior = 0;
		vector<int> winners;
		for(int j = 0; j < nPil; j++){
			if(final[i][j] > maior){
				winners.clear();
				maior = final[i][j];
				winners.push_back(j+1);
			}else if(final[i][j] == maior){
				winners.push_back(j+1);

			}
		}

		for(int j = 0; j < winners.size(); j++){
			cout << winners[j] << " ";
		}



		cout << endl;
	}
	}

}