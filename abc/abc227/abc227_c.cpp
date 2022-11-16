#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<(ll)end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=(ll)end; val_name--)
#define vrep(element, vec) for(auto &element:vec)

int ctoi(char c) {return c - '0';}

int main(void){
    ll n; cin >> n;
    
    ll ans = 0;
    for(ll a=1; a*a*a<=n;a++){
        for(ll b=a; a*b*b<=n;b++)
            ans += n/a/b-b+1;
    }

    cout << ans << endl;
    return EXIT_SUCCESS;
}