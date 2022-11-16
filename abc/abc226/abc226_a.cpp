#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)
#define vrep(element, vec) for(auto &element:vec)

int ctoi(char c) {return c - '0';}

int main(void){
    float x; cin >> x;

    cout << round(x);
    return EXIT_SUCCESS;
}