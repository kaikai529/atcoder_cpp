#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)

int main(void){
    int l, r;
    cin >> l >> r;

    string s;
    cin >> s;

    rep(i, 0, l-1) cout << s[i];
    rrep(i,r-1,l-1) cout << s[i];
    rep(i, r, s.size()) cout << s[i];


    return EXIT_SUCCESS;
}