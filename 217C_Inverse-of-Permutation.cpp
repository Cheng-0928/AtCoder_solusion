#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
    int x;
    cin >> x;
    v[x-1] = i+1;
  }
  for(int &it : v) cout << it << ' ';
  cout << '\n';
  return 0;
}
