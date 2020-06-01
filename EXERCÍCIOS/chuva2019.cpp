#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

char grid[510][510];

int N, M;

void molha(int i, int j){
    
    if(i >= 0 && i < N && j >= 0 && j < M){
        cout << "ovo moiar o [" << i << "]["<<j <<"]"<<endl; 

        grid[i][j] = 'o';
    
        if(grid[i + 1][j] == '#'){
            molha(i,j+1);
            molha(i,j-1);
        }else{
            //molha(i+1,j);
            
            while(grid[i][j] != '#'){
                grid[i][j] = 'o';

                i++;
            };

            molha(i,j+1);
            molha(i,j-1);

        }
    }    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ic,jc;

    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'o'){
                ic = i;
                jc = j;
            }
        }
    }

    molha(ic,jc);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}