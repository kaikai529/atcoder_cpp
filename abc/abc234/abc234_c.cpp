#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)


int main(void){
    ll k;
    cin >> k;
    
    string ans = "";
    while (k!=0){
        ans = (k%2==0 ? "0":"1") + ans;
        k /= 2;
    }
    
    for(char s: ans){
        if (s=='1') cout << '2';
        else cout << s;
    }
    return EXIT_SUCCESS;
}