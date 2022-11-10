#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)

int main(void){
    int n, q;
    cin >> n >> q;
    
    // 連想配列
    map<int, vector<int>> a;
    rep(i,0,n){
        int _a;
        cin >> _a;
        a[_a].push_back(i+1);
    }
    // クエリの処理
    rep(i, 0, q){
        int x, k;
        cin >> x >> k;
        if (k-1<a[x].size()) cout << a[x][k-1] << endl;
        else cout << "-1" << endl;
    }

    return EXIT_SUCCESS;
}

/*
連想配列 map<key, val>
*/