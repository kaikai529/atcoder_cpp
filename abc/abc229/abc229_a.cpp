#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)
#define vrep(element, vec) for(auto &element:vec)

int main(void){
    vector<string> s(2); vrep(v, s) cin >> v;
    vector<pair<int, int>> vec4 = {{1,0},{-1,0},{0,1},{0,-1}};
    rep(h, 0, 2) rep(w, 0, 2){
        for(auto &v:vec4){
            if(!(0<=h+v.first && h+v.first<2
                && 0<=w+v.second && w+v.second<2)) continue;
            
            if(s[h][w]=='#' && s[h+v.first][w+v.second]=='#'){
                cout << "Yes";
                return EXIT_SUCCESS;
            }
        }
    }

    cout << "No";
    return EXIT_SUCCESS;
}