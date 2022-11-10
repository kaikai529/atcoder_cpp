#include <bits/stdc++.h>

using namespace std;

#define rep(i, a, n) for(int i = a; i < n; ++i)

const int max1e3 = 1e3;
const int max1e4 = 1e4;
const int max1e5 = 1e5;

int f(int _n){
    if(_n<=1){
        return 1;
    }
    return _n*f(_n-1);
}

int main(void){
    int n, ans;
    cin >> n;
    
    ans = f(n);

    cout << ans << endl;
    return EXIT_SUCCESS;
}