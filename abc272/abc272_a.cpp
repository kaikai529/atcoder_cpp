#include <bits/stdc++.h>

using namespace std;

#define rep(i, a, n) for(int i = a; i < n; ++i)

int main(void){
    int n, a, a_sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        a_sum += a;
    }

    cout << a_sum << endl;
    return EXIT_SUCCESS;
}