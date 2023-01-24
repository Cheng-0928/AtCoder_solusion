#include <bits/stdc++.h>
#define int long long
/*#define X first
#define Y second*/
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define SIZE(a) signed(a.size())

using namespace std;

const int MAX_N = 5*100000;

#define Q first
#define X second

void sol(){

    int n, q;
    cin >> n ;
    vector<int> a(n);
    for(int &it :a) cin >> it;
    cin >> q;
    vector<vector<pair<int,int>>> l(MAX_N), r(MAX_N);

    int cnt[MAX_N] = {0};
    vector<int> ans(q, 0);

    for(int i = 0;i<q;i++){
        int L, R, x;
        cin >> L >> R >> x;
        l[L-1].push_back({i,x});
        r[R-1].push_back({i,x});
    }

    for(int i = 0;i<n;i++){
        //cnt[a[i]]++;
        if(!(l[i].empty())){
        for(int j = 0;j<SIZE(l[i]);j++){
            ans[l[i][j].Q]-=cnt[l[i][j].X];
        }
    }
        if(!(r[i].empty())){
        for(int j = 0;j<SIZE(r[i]);j++){
            ans[r[i][j].Q]+=cnt[r[i][j].X];
            if(a[i] == r[i][j].X) ans[r[i][j].Q]++;
        }
    }
        cnt[a[i]] = cnt[a[i]]+1;
    }
    for(int i = 0;i<q;i++){
        cout << ans[i] << '\n';
    }


}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--)*/ sol();
    return 0;
}
