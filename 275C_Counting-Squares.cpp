#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

vector<string> mp(9);

bool block(int x, int y){
    return (x >= 0 && y >= 0 && y< 9 && x < 9 && mp[y][x] == '#');
}

bool check_squares(int xa, int xb, int ya, int yb, int x_dis, int y_dis){
    if(block(xa, ya) && block(xb, yb) && block(xa + y_dis, ya + x_dis) && block(xb + y_dis, yb + x_dis)){
        return 1;
    }
    return 0;
}

void sol(){
    //vector<string> mp(9);
    int ans = 0;
    for(int i = 0;i<9;i++) cin >> mp[i];
    //cout << 1;
    for(int xa = 0;xa<9;xa++){
        for(int ya = 0;ya<9;ya++){
            for(int xb = 0;xb < 9;xb++){
                for(int yb = 0;yb<9;yb++){
                    if(xa == xb && ya == yb) continue;
                    int x_dis = xb - xa, y_dis = ya - yb;

                    if(check_squares(xa, xb, ya, yb, x_dis, y_dis)){
                        ans++;
                        //cout << xa << ya << xb << yb << '\n';
                    }
                }
            }
        }
    }
    cout << ans/4 << '\n';
}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
