#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)


int main(void){
    int x, y;
    cin >> x >> y;

    cout << max(0, (int)ceil((double)(y-x)/10.)) << endl;
    return EXIT_SUCCESS;
}