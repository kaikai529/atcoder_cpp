#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)


int main(void){
    ll n;
    cin >> n;

    vector<ll> cnt(4*n, 0);
    rep(i, 0, 4*n-1){
        int a;
        cin >> a;
        cnt[a-1]++; 
    }

    rep(i, 0, 4*n){
        if (cnt[i]==3) {cout << i+1; break;}
    }

    return EXIT_SUCCESS;
}