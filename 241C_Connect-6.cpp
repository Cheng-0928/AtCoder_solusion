#include <iostream>
#include <string>
using namespace std;

bool check(int cnt){
  if(cnt >= 4){
    cout << "Yes";
    return 1;
  }
  return 0;
}

int main() {
  int n;
  cin >> n;
  string s[n];
  for(string &it : s) cin >> it;
  for(int x = 0;x<n;x++){
    for(int y = 0;y<n;y++){
      if(x+5<n){
        int cnt = 0;
        for(int m = 0;m<6;m++){
          cnt+=(s[y][x+m] == '#');
        }
        if(check(cnt)) return 0;
      }
      if(y+5<n){
        int cnt = 0;
        for(int m = 0;m<6;m++){
          cnt+=(s[y+m][x] == '#');
        }
        if(check(cnt)) return 0;
      }
      if(x+5<n && y+5 < n){
        int cnt = 0;
        for(int m = 0;m<6;m++){
          cnt+=(s[y+m][x+m] == '#');
        }
        if(check(cnt)) return 0;
      }
      if(x+5<n && y-5>=0){
        int cnt = 0;
        for(int m = 0;m<6;m++){
          cnt+=(s[y-m][x+m] == '#');
        }
        if(check(cnt)) return 0;
      }
    }
  }
  cout << "No";
  return 0;
}
