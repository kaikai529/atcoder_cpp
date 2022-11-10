#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)


ll n, x, ans=0;
vector<vector<int>> a;

void dfs(ll num, ll depth){
    // 最後の袋で1になっているかどうか
    if (depth==-1){
        if(num==1) ans++;
        return ;
    }
    
    // 袋の中で割り切れるものの探索
    for(auto &ball:a[depth]){
        if (num%ball==0) dfs(num/ball, depth-1);
    }
}

int main(void){
    // 入力
    cin >> n >> x;
    a.resize(n);
    rep(i, 0, n){
        ll l; cin >> l;
        a[i].resize(l);
        for(auto &v:a[i]) cin >> v;
    }

    // 深さ優先探索 
    dfs(x, n-1);
    cout << ans;
    return EXIT_SUCCESS;
}