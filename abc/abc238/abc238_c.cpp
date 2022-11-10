#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

int main(void){
    ll n;
    cin >> n;

    ll ans = 0;
    ll pos = 10;
    for(int i=0;i<to_string(n).size();i++){
        ll k = min(pos-1,n)-pos/10+1; k%=MOD;
        ans += k*(k+1)/2%MOD;
        pos *= 10;
    }

    cout << ans;
    return EXIT_SUCCESS;
}