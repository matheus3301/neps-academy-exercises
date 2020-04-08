#include <bits/stdc++.h>


using namespace std;



bool contains(string a, char b){
    for(char val : a){
        if(val == b) return true;
    }

    return false;
}


int main(){
    
    string s;
    char x;
    string palavra;
    scanf("%c\n",&x);
    getline(cin,s);

    stringstream stream(s);

    float numerador = 0;
    float denominador = 0;
    while(getline(stream,palavra,' ')){
        denominador++;
        if(contains(palavra,x))numerador++;
    }

    float res = (numerador/denominador)*100.;

    printf("%.1f", res);

    


    return 0;
}