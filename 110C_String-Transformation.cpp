#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, char> to, from;
  string s, t;
  cin >> s >> t;
  for(int i = 0;i<s.size();i++){
    if(to[s[i]]){
      if(to[s[i]] != t[i]) {cout << "No\n"; return 0;}
    }
    else{
      to[s[i]] = t[i];
      if(from[t[i]] && from[t[i]] != s[i]) {cout << "No\n";return 0;}
      from[t[i]] = s[i];
    }
  }
  cout << "Yes\n";
  return 0;
}
