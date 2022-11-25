#include <iostream>
#include <string>
using namespace std;
int w,h;
string s[100];
int xm[4] = {-1,1,0,0};
int ym[4] = {0,0,-1,1};
int c(int x,int y,int i){
  int re = 0;
  while(x+xm[i] >= 0 && y+ym[i] >= 0 &&x+xm[i]<h && y+ym[i] < w && s[x+xm[i]][y+ym[i]] == '.') {
    re++;
    x+=xm[i];y+=ym[i];
  }
  return re;
}
int main() {
  int x,y;
  cin >> h >> w >> x >> y;
  
  for(string &it: s) cin >> it; 
  int cnt = 1;
  for(int i = 0;i<4;i++){
    cnt+=c(x-1,y-1,i);
  }
  cout << cnt;
  
  return 0;
}
#include <iostream>
#include <string>
using namespace std;
int w,h;
string s[100];
int xm[4] = {-1,1,0,0};
int ym[4] = {0,0,-1,1};
int c(int x,int y,int i){
  int re = 0;
  while(x+xm[i] >= 0 && y+ym[i] >= 0 &&x+xm[i]<h && y+ym[i] < w && s[x+xm[i]][y+ym[i]] == '.') {
    re++;
    x+=xm[i];y+=ym[i];
  }
  return re;
}
int main() {
  int x,y;
  cin >> h >> w >> x >> y;
  
  for(string &it: s) cin >> it; 
  int cnt = 1;
  for(int i = 0;i<4;i++){
    cnt+=c(x-1,y-1,i);
  }
  cout << cnt;
  
  return 0;
}
