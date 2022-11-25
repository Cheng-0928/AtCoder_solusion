#include <iostream>
#include <string>
using namespace std;
 
int xm[4] = {-1,1,0,0};
int ym[4] = {0,0,-1,1};
int h,w;
int visited[500][500];
int move(char c, int x, int y){
  if(c == 'L' && y!=0) return 2;
  if(c == 'R' && y!=w-1) return 3;
  if(c == 'U'&& x != 0) return 0;
  if(c == 'D' && x!=h-1) return 1;
  return 4;
}
int main() {
  
  cin >> h >> w;
  string s[h];
  for(string &it : s) cin >> it;
  int pos_x = 0, pos_y = 0;
  for(int i = 0;i<h*w;i++){
    
    visited[pos_x][pos_y]++;
    if(move(s[pos_x][pos_y], pos_x, pos_y) != 4){
      int dir = move(s[pos_x][pos_y], pos_x, pos_y);
      pos_x+=xm[dir];
      pos_y+=ym[dir];
      if(visited[pos_x][pos_y]){
        cout << -1;
        break;
        }
    }
    else{
      cout << pos_x+1 << ' ' << pos_y+1;
      break;
    }
  }
  return 0;
}
