#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

vector<int> visited(2001, 0);
vector<vector<int>> mp(2001);
int ans = 0, tt = 1;

void dfs(int x){
    if(visited[x] == tt) return;
    ans++;
    visited[x] = tt;
    for(int it : mp[x]) dfs(it);
}

void sol(){
    int n, m;
    cin >> n >> m;
    for(int i = 1;i<=n;i++) mp[i].push_back(i);
    while(m--){
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
    }
    for(int i = 1;i<=n;i++){
        dfs(i);
        tt++;
    }
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
