#include <iostream>
#define int long long
using namespace std;

int g(int a){
  if(a <= 0) return 0;
  int n = a/4;
  if(a%4 == 1) return 1;
  if(a%4 == 2) return a+1;
  if(a%4 == 3) return 0;
  return a;
}

signed main() {
  int a,b;
  cin >> a >> b;
  cout << (g(a-1) ^ g(b))<<'\n';
  return 0;
}
