#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

void sol(){
    int l,q;
    cin >> l >> q;
    set<int> st{0,l};
    while(q--){
        int c,x;
        cin >> c >> x;
        if(c == 1) st.insert(x);
        else cout << *st.lower_bound(x) - *(--st.upper_bound(x)) << '\n';
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
