#include <bits/stdc++.h>
#define int long long //TLE or MLE remove
#define f first
#define s second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define SIZE(a) signed(a.size())

using namespace std;

const int MAXN = 100000;
bitset<MAXN + 1> ban, a;

void sol(){
    //freopen("cereal.in", "r", stdin);
    //freopen("cereal.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    while(n--){
        int x;
        cin >> x;
        a[x] = 1;
    }
    for(int i = 2;i <= MAXN; i++){
        bool found = 0;
        for(int j = i;j<=MAXN;j+=i) if(a[j]) found = 1;
        if(found){
            for(int j = i;j<=m;j+=i) ban[j] = 1;
        }
    }
    cout << m - ban.count() << '\n';
    for(int i = 1;i<=m;i++) if(!ban[i]) cout << i << '\n';

}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--)*/ sol();
    return 0;
}
