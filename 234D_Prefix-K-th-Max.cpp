#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

priority_queue<int, vector<int>, greater<int>> pque;

void sol(){
    int n, k;
    cin >> n >> k;

    for(int i = 1;i<=n;i++){
        int x;
        cin >> x;
        pque.push(x);
        if(i > k) pque.pop();
        if(i >= k) cout << pque.top() << '\n';
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
