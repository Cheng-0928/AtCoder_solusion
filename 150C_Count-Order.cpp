#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for(int &it : a) cin >> it;for(int &it : b) cin >> it;
  if(a < b){
    vector<int> tmp;
    tmp = a;
    a.clear();a = b;
    b.clear();b = tmp;
  }
  int ans = 0;
  do{
    if(a == b) break;
    ans++;
  }while(next_permutation(b.begin(), b.end()));
  cout << ans;
  return 0;
}
