#include <bits/stdc++.h>
#define int long long
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

void sol(){
    int a,s;
    cin >> a >> s;
    int b = (s - a);
    cout << ((a <= s) && ((a & b) == a) ? "Yes" : "No") << '\n';
}

signed main()
{
    Cheng0928
    int t;
    cin >> t;
    while(t--) sol();
    return 0;
}
