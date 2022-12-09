#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int &it : v) cin >> it;
  prev_permutation(v.begin(), v.end());
  for(int &it : v) cout << it << ' ';
  cout << '\n';
  return 0;
}
