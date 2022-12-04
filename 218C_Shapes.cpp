#include <bits/stdc++.h>
using namespace std;

vector<string> turn(vector<string> s){
  vector<string> ret(s.size(), string(s.size(), '.'));
  int n = s.size();
  for(int y = 0;y<s.size();y++){
    for(int x = 0;x<s.size();x++){
      ret[n - y - 1][x] = s[x][y];
    }
  }
  return ret;
}

vector<int> get(vector<string> s){
  int n = s.size();
  vector<int> ret = {n,n,0,0};//fxly
  for(int y = 0;y<n;y++){
    for(int x = 0;x<n;x++){
      if(s[y][x] == '#'){
        ret[0] = min(ret[0], x);ret[2] = max(ret[2], x);
        ret[1] = min(ret[1], y);ret[3] = max(ret[3], y);
      }
    }
  }
  return ret;
}

bool match(vector<string> s, vector<string> t){
  vector<int> side_s, side_t;
  side_s = get(s);side_t = get(t);
  if(side_s[2] - side_s[0] != side_t[2] - side_t[0] || 
     side_s[3] - side_s[1] != side_t[3] - side_t[1]) return 0;
  for(int y = 0;y<side_s[3] - side_s[1];y++){
    for(int x = 0;x < side_s[2] - side_s[0];x++){
      if(s[y + side_s[1]][x + side_s[0]] != t[y + side_t[1]][x + side_t[0]]) return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  for(string &it : s) cin >> it; for(string &it : t) cin >> it;
  for(int i = 0;i<4;i++){
    s = turn(s);
    if(match(s,t)){
      cout << "Yes";return 0;
    }
  }
  cout << "No";
  return 0;
}
