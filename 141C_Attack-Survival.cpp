#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;


void sol(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> p(n, k);
    for(int i = 0;i<q;i++){
        int a;
        cin >> a;
        a--;
        p[a]++;
    }
    for(int it : p){
        cout << (it-q > 0 ? "Yes\n" : "No\n");
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
