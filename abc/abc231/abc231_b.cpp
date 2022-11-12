#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)

int ctoi(char c) {return c - '0';}

int main(void){
    int n; cin >> n;
    
    map<string, int> mp;
    rep(i, 0, n){
        string name; cin >> name;
        mp[name] += 1;
    }

    vector<pair<int, string>> v;
    for(auto &item:mp){
        v.push_back( {item.second, item.first} );
    }
    sort(v.begin(), v.end());
    cout << v[v.size()-1].second;
    return EXIT_SUCCESS;
}

/*

mapのソートについて
そのままソートはできないため、
vevtor型に直してソートする

map -> vector -> sort

*/