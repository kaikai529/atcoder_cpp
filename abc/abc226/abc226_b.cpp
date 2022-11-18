#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)
#define vrep(element, vec) for(auto &element:vec)

int ctoi(char c) {return c - '0';}

int main(void){
    int n; cin >> n;
    set<vector<int>> ans;
    rep(i, 0, n){
        int l; cin >> l;
        vector<int> a(l); vrep(v, a) cin >> v;
        ans.insert(a);
    }

    cout << ans.size() << endl;
    return EXIT_SUCCESS;
}