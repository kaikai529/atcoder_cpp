#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)
#define vrep(element, vec) for(auto &element:vec)

int ctoi(char c) {return c - '0';}

int main(void){
    int s, t, x; cin >> s >> t >> x;
    if((s<t and (s<=x and x<t)) or (s>t and (x<t or s<=x))) cout << "Yes";
    else cout << "No";
    return EXIT_SUCCESS;
}