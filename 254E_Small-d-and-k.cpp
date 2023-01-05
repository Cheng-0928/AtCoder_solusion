#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

vector<vector<int>> mp(150001);
vector<vector<int>> visited(150001, vector<int>(4, 0));
int K, tt, ans;

void dfs(int x, int k){
    if(k > K || visited[x][k] == tt) return;
    bool check = 1;
    for(int i = 0; i <= K;i++) if(visited[x][i] == tt) check = 0;
    visited[x][k] = tt;
    if(check) ans+=x;
    for(int it : mp[x]) dfs(it, k+1);

}

void sol(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    for(int i = 1;i<=n;i++) mp[i].push_back(i);
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x >> K;
        ans = 0;
        tt++;
        dfs(x, 0);

        cout << ans << '\n';
    }
}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
