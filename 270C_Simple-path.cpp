#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

int n, X, Y;
vector<vector<int>> mp(200001);
vector<int> ans;

bool dfs(int x, int from){
    if(x == Y) return 1;
    for(int it : mp[x]){
        if(it == from) continue;
        if(dfs(it, x)){
            ans.push_back(it);
            return 1;
        }
    }
    return 0;
}

void sol(){


    cin >> n >> X >> Y;
    for(int i = 1;i<n;i++){
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    for(int i = 1;i<=n;i++) sort(mp[i].begin(), mp[i].end());
    dfs(X, X);
    ans.push_back(X);
    reverse(ans.begin(), ans.end());
    for(int it : ans) cout << it << ' ';

}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
