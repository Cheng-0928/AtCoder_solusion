#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

vector<vector<int>> mp(100001);
vector<int> c(100001);
vector<int> ans;
vector<int> visited(100001);
vector<int> cnt(100001, 0);

void dfs(int x){
    if(visited[x]) return;
    visited[x] = 1;

    if(!cnt[c[x]]) ans.push_back(x);
    cnt[c[x]]++;
    for(int it : mp[x]) dfs(it);
    cnt[c[x]]--;
    visited[x] = 0;
}

void sol(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++) cin >> c[i];
    for(int i = 1;i<n;i++){
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    dfs(1);
    sort(ans.begin(), ans.end());
    for(int it : ans) cout << it << '\n';
}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
