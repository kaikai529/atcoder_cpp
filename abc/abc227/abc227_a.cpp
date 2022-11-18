#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)
#define vrep(element, vec) for(auto &element:vec)

int ctoi(char c) {return c - '0';}

int main(void){
    int n, k, a; cin >> n >> k >> a;

    if (n==1){
        cout << 1;
        return EXIT_SUCCESS;
    }

    int ans = 0;
    if((k+a-1)%n==0) ans = n;
    else ans = (k+a-1)%n;
    cout << ans << endl;

    return EXIT_SUCCESS;
}