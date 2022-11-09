#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<(ll)end;val_name++)

int main(void){
    int h, w;
    cin >> h >> w;

    vector<vector<int>> a(h, vector<int>(w,0));
    rep(_h,0,h) rep(_w,0,w){
        cin >> a[_h][_w];
    }

    rep(_w,0,w){
        rep(_h,0,h){
            cout << a[_h][_w] << " ";
        }
        cout << endl;
    }
