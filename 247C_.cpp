#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

void dfs(int x){
    if(!x) return;
    dfs(x-1);
    cout << x << ' ';
    dfs(x-1);
}

void sol(){
    int n;
    cin >> n;
    dfs(n);
}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
