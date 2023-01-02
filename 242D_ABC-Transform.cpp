#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

string s;

char oper(char c, int t){
    return (c - 'A' + t)%3 + 'A';
}

char f(int t, int k){
    if(t == 0) return s[k-1];
    if(k == 1) return oper(s[k-1], t);
    char c = f(t-1, (k + 1) / 2);
    return oper(c, 2 - (k%2));
}

void sol(){
    int q;
    cin >> s;
    cin >> q;
    while(q--){
        int t, k;
        cin >> t >> k;
        cout << f(t, k) << '\n';
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
