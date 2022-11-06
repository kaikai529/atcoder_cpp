#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long x;
    cin >> x;

    if(x>=0) cout << x/10;
    else cout << (x-9)/10;
    return EXIT_SUCCESS;
}