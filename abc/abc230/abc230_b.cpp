#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define vrep(element, vec) for(auto &element:vec){cin >> v;}

int main(void){
    string s; cin >> s;
    string t = "oxx";

    rep(start, 0, 3){
        bool ok = true;
        rep(i, 0, s.size()){
            if(t[(start+i)%3]!=s[i]){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return EXIT_SUCCESS;
}