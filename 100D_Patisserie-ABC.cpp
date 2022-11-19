#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

int get_bit(int x,int y) {return (x>>y) & 1;}

signed main() {
  int n,m;
  cin >> n >> m;
  vector<int> c[n];
  for(int i = 0;i<n;i++){
    for(int j = 0;j<3;j++){
      int it;
      cin >> it;
      c[i].push_back(it);
    }
  }
  vector<int> vec(n);
  int ans = 0;
  for(int i = 0;i<8;i++){
    for(int j = 0;j<n;j++){
      vec[j] = 0;
      for(int k = 0;k<3;k++){
        vec[j] += (get_bit(i,k) ? c[j][k] : -c[j][k]);
      }
    }
    sort(vec.begin(),vec.end(),greater<int>());
      int sum = 0;
      for(int i = 0;i<m;i++){
        sum += vec[i];
      }
      ans = max(ans,sum);
    
  }
  cout << ans;
  return 0;
}
