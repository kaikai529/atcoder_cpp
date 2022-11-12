#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define mv(vec) for(auto &v:vec){cin >> v;}

int main(void){
    int n; cin >> n;
    if(n>=42) n++;

    cout << "AGC" << setfill('0') << right << setw(3) << n;
    return EXIT_SUCCESS;
}