#include <bits/stdc++.h>
using namespace std;

long int a[1123456], n, f[1123456], m;

long int fr(int k){

  for(int i = n+1; i <= k; i++){
    f[i]=0;
    for(int j = 1; j <= n; j++){
      f[i]+=a[j]*f[i-j];
      f[i] %= m;
    }
  }

  return f[k];
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int k;

  cin >> n >> k >> m;

  for(int i = 1; i <= n; i++) cin >> a[i];

  for(int i = 1; i <= n; i++) cin >> f[i];

  cout << fr(k) << endl;

  return 0;
}