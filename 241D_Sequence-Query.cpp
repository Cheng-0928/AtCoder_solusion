#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

void sol(){
    int q;
    multiset<int> a;
    cin >> q;
    while(q--){
        int c;
        cin >> c;
        if(c == 1){
            int x;
            cin >> x;
            a.insert(x);
        }
        if(c == 2){
            int x, k;
            cin >> x >> k;
            auto it = a.upper_bound(x);
            bool check = 1;
            while(k--){
                if(it == a.begin()){
                    cout << -1 << '\n';
                    check = 0;
                    break;
                }
                it--;
            }
            if(check) cout << *it << '\n';
        }
        if(c == 3){
            int x, k;
            bool check = 1;
            cin >> x >> k;
            k--;
            auto it = a.lower_bound(x);
            if(it == a.end()){
                cout << -1 << '\n';
                continue;
            }
            while(k--){
                it++;
                if(it == a.end()){
                    cout << -1 << '\n';
                    check = 0;
                    break;
                }
            }
            if(check) cout << *it << '\n';
        }
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
