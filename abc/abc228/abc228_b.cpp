#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)
#define vrep(element, vec) for(auto &element:vec)

int ctoi(char c) {return c - '0';}

int main(void){
    int n, x; cin >> n >> x;
    vector<int> a(n); vrep(v, a) cin >> v, v--;
    vector<int> flag(n, false);

    int ans = 0;
    int this_friend = x-1;
    while(!flag[this_friend]){
        flag[this_friend] = true;
        this_friend = a[this_friend];
        ans++;
    }

    cout << ans;
    return EXIT_SUCCESS;
}