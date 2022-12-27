#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())
 
using namespace std;
 
void positive(int &now, int l, vector<int> &vec, int limit){
    auto it = lower_bound(vec.begin(), vec.end(), now);
    if(it != vec.end()) limit = min(limit, *it - 1);
    now = min(limit, now + l);
}
void negative(int &now, int l, vector<int> &vec, int limit){
    auto it = lower_bound(vec.begin(), vec.end(), now);
    if(it != vec.begin()) limit = max(limit, *prev(it) + 1);
    now = max(limit, now - l);
}
 
void sol(){
    int H, W;
    pair<int,int> now;
    cin >> H >> W >> now.Y >> now.X;
    map<int, vector<int>> row, column;
    int n;
    cin >> n;
    while(n--){
        int x, y;
        cin >> y >> x;
        column[x].push_back(y);
        row[y].push_back(x);
    }
    for(auto it = row.begin();it != row.end();it++) sort(it->second.begin(), it->second.end());
    for(auto it = column.begin();it != column.end();it++) sort(it->second.begin(), it->second.end());
    int q;
    cin >> q;
    while(q--){
        char d;int l;
        cin >> d >> l;
        if(d == 'D') positive(now.Y, l, column[now.X], H);
        else if(d == 'R') positive(now.X, l, row[now.Y], W);
        else if(d == 'U') negative(now.Y, l, column[now.X], 1);
        else negative(now.X, l, row[now.Y], 1);
        cout << now.Y <<  ' ' << now.X << '\n';
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
