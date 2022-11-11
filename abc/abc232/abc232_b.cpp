#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)


int main(void){
    string s, t;
    cin >> s; cin >> t;

    int ok = s[0]-t[0];
    if(ok>0) ok-=26;
    rep(i,1,s.size()){
        int sub = s[i]-t[i];
        if(sub>0) sub-=26;
        if(ok!=sub){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return EXIT_SUCCESS;
}