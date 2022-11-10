#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)


int main(void){
    int n;
    cin >> n;
    
    vector<pair<int, int>> point(n);
    for(auto &v:point) cin >> v.first >> v.second;
    
    double ans = 0.;
    rep(i,0,n) rep(j,i+1,n){
        double dx, dy, temp;
        dx = (double)pow(point[i].first-point[j].first,2);
        dy = (double)pow(point[i].second-point[j].second,2);
        temp = sqrt(dx+dy);
        if (temp > ans) ans = temp;
    }
    cout << fixed << setprecision(9) << ans;
    return EXIT_SUCCESS;
}