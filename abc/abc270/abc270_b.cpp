#include <bits/stdc++.h>
using namespace std;

int main(void){
    int x, y, z;
    cin >> x >> y >> z;
    
    int ans = -1;
    // ゴールに直接行けるか
    if(!((0<y & y<x) | (x<y & y<0))){
        ans = abs(x);
    }
    // ハンマーが取れるか
    else if(!((0<y & y<z) | (z<y & y<0))){
        ans = abs(z)+abs(x-z);
    }

    cout << ans << endl;
    return EXIT_SUCCESS;
}