#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end;val_name++)

int main(void){
    int n;
    cin >> n;

    int ans = 0;
    rep(i, 0, n){
        int h;
        cin >> h;
        if (ans < h) ans = h;
        else break;
    }
    cout << ans;
    return EXIT_SUCCESS;
}