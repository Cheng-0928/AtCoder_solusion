#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

vector<vector<int>> mp(200001);

void dfs(int x, int from){
    cout << x << ' ';
    for(int it : mp[x]){
        if(it == from) continue;
        dfs(it, x);
        cout << x << ' ';
    }
}

void sol(){

    int n;
    cin >> n;
    for(int i = 1;i<n;i++){
        int x, y;
        cin >> x >> y;
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    for(int i = 1;i<=n;i++) sort(mp[i].begin(), mp[i].end());
    dfs(1, 1);

}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
