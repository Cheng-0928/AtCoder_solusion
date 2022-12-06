
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    int cnt = 0;
    sort(s.begin(),s.end());
    do{
        cnt++;
        if(cnt == n) break;
    }while(next_permutation(s.begin(), s.end()));
    cout << s;
    return 0;
}
