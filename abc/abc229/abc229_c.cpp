#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)
#define vrep(element, vec) for(auto &element:vec)


int main(void){
    int n, w; cin >> n >> w;
    
    vector<pair<ll, ll>> cheese(n);
    vrep(v,cheese) cin >> v.first >> v.second;

    sort(cheese.rbegin(), cheese.rend());
    ll this_w = 0, ans = 0;
    vrep(this_cheese, cheese){
        ans += this_cheese.first*min(this_cheese.second, w-this_w);
        this_w += min(this_cheese.second, w-this_w);
        if (this_w==w) break;
    }

    cout << ans;
    return EXIT_SUCCESS;
}