#include <iostream>
#include <bitset>
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,x;
    cin >> n >> x;
    bitset<10005> bst[n];
    bst[0][0] = 1;
    for(int i = 1;i<=n;i++){
        int a,b;
        cin >> a >> b;
        bst[i] = (bst[i-1] << a) | (bst[i-1] << b);
    }
    if(bst[n][x]) cout << "Yes";
    else cout << "No";
 
    return 0;
}
