#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

map<int,vector<int>> mp;
int ans = 0;
set<int> visited;

void dfs(int x){
    ans = max(ans, x);
    if(visited.count(x)) return;
    visited.insert(x);
    for(int &it : mp[x]) dfs(it);
}

void sol(){
    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    dfs(1);
    cout << ans << '\n';
}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
