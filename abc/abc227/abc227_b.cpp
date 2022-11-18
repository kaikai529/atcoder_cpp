#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)
#define vrep(element, vec) for(auto &element:vec)

int ctoi(char c) {return c - '0';}

int main(void){
    int n; cin >> n;

    vector<int> s(1005, 0); 
    rep(a,1,200){
        rep(b,1,200){
            int area = 4*a*b+3*a+3*b;
            if(area>1000) break;
            s[area] = 1;
        }
    }
    
    int ans = 0;
    rep(i,0,n){
        int ss; cin >> ss;
        if(s[ss]==1) ans++;
    }

    std::cout << n-ans << endl;
    return EXIT_SUCCESS;
}