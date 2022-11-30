#include <iostream>
#include <vector>
#include <utility>
#include <string>
#define f first
#define s second
#define int long long
using namespace std;
 
string s[10];
 
int xm[8] = {-1,1,0,0,-1,-1,1,1};
int ym[8] = {0,0,-1,1,-1,1,-1,1};
int solve(pair<int,int> p, int n, int d){
  string re = string(1,s[p.s][p.f]);
  
  for(int i = 0; i < n - 1; i++){
    p.f=((p.f+xm[d])%n+n)%n;
    p.s=((p.s+ym[d])%n+n)%n;
    re+=s[p.s][p.f];
  }
  return stoll(re);
}
 
signed main() {
  int n;
  cin >> n;
  
  int ans = 0;
  for(int i = 0;i<n;i++) cin >> s[i];
  for(int x = 0;x<n;x++){
    for(int y = 0;y<n;y++){
      for(int d = 0;d<8;d++){
        ans = max(ans, solve({x,y}, n, d));
      }
    }
  }
  cout << ans;
  return 0;
}
