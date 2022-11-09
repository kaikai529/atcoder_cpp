#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) = for(int i=j;i<k;j++);


int main(void){
    string s;
    cin >> s;

    ll a, b;
    cin >> a >> b;
    for(int i=1;i<s.size()+1;i++){
        if (i==a) cout << s[b-1];
        else if (i==b) cout << s[a-1];
        else cout << s[i-1];
    }

    return EXIT_SUCCESS;
}