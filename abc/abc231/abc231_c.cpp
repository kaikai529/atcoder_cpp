#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define mv(vec) for(auto &v:vec){cin >> v;}

int ctoi(char c) {return c - '0';}

int main(void){
    int n, q; cin >> n >> q;
    
    vector<int> height(n); mv(height);
    sort(height.begin(), height.end());

    rep(_, 0, q){
        int query; cin >> query;
        int index;
        cout << height.end()-lower_bound(height.begin(), height.end(), query) << endl;
    }

    return EXIT_SUCCESS;
}

/*
c++の二分探索 lower_bound
指定した値の位置を返す
*/