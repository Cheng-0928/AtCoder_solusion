#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

void sol(){
    int n;
    cin >> n;
    set<vector<int>> st;
    while(n--){
        int sz;
        cin >> sz;
        vector<int> vec(sz);
        for(int &it : vec) cin >> it;
        st.insert(vec);
    }
    cout << size(st) << '\n';

}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
