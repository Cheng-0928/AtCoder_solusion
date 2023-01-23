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
    string s;
    cin >> s;
    int q;
    cin >> q;
    bool flip = 0;
    while(q--){
        int t, a, b;
        cin >> t >> a >> b;
        if(t == 1){
            a--;b--;
            if(flip){
                a = (a+n)%(2*n);
                b = (b+n)%(2*n);
            }
            swap(s[a], s[b]);
        }
        if(t == 2) flip=!flip;
    }
    if(flip) rotate(s.begin(), s.begin()+n, s.end());
    cout << s << '\n';

}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--)*/ sol();
    return 0;
}
