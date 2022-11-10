#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)

int func(int num){
    return pow(num, 2) + 2*num+3;
}

int main(void){
    int t;
    cin >> t;

    cout << func(func(func(t)+t)+func(func(t)));
    return EXIT_SUCCESS;
}