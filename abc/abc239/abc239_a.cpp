#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long x;
    cin >> x;

    double ans = 0.0;
    ans = x*(12800000+x);
    ans = sqrt(ans);
    cout << fixed << ans;

    return EXIT_SUCCESS;
}