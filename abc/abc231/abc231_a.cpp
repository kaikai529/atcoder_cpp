#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)

int ctoi(char c) {return c - '0';}

int main(void){
    int x;
    cin >> x;

    cout << fixed << setprecision(3) << (float)x / 100.;
    return EXIT_SUCCESS;
}