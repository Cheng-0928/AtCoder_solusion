#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool cr(int &h, int &w, vector<string> &s){
  for(int i = 0;i<h;i++){
    int cnt = 0;
    for(int j = 0;j<w;j++) cnt+=(s[i][j] == '.');
    if(cnt == w){
      s.erase(s.begin() + i);
      h--;
      return 1;
    }
  }
  return 0;
}
bool cc(int &h, int &w, vector<string> &s){
  for(int i = 0;i<w;i++){
    int cnt = 0;
    for(int j = 0;j<h;j++) cnt+=(s[j][i] == '.');
    if(cnt == h){
      for(int k = 0;k<h;k++) s[k].erase(s[k].begin() + i);
      w--;
      return 1;
    }
  }
  return 0;
}

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for(string &it : s) cin >> it;
  
  while(1){
    if(cr(h,w,s)) continue;
    if(cc(h,w,s)) continue;
    break;
  }
  for(int i = 0;i<h;i++){
    for(int j = 0;j<w;j++) cout << s[i][j];
    cout << '\n';
  }
  return 0;
}
