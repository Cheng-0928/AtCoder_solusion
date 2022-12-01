#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int cnt[1001];

int main() {
  int n;
  cin >> n;
  for(int i = 0;i<n;i++){
    int it;
    cin >> it;
    cnt[it]++;
  }
  for(int i = 1;i<=n;i++){
    if(cnt[i] > 1){
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  
  return 0;
}
