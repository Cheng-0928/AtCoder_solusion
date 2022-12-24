#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

struct data{
    int S;
    int T;
    int X;

    bool operator<(const data b) const{
        return X < b.X;
    }
};

void sol(){
    int n, q;
    cin >> n >> q;
    struct data d[n];
    for(int i = 0;i<n;i++){
        cin >> d[i].S >> d[i].T >> d[i].X;
    }
    sort(d, d+n);
    set<pair<int,int>> p;
    for(int i = 0;i<q;i++){
        int x;
        cin >> x;
        p.insert({x,i});
    }
    vector<int> ans(q);
    for(int i = 0;i<n;i++){
        auto start = p.lower_bound({d[i].S - d[i].X, 0});
        auto it = start;
        for(it;it != p.end() && it->first < d[i].T - d[i].X;it++) ans[it->second] = d[i].X;
        p.erase(start, it);
    }
    for(int &it : ans) cout << (it ? it : -1) << '\n';
}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
