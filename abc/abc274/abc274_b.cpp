#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <ctime>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <tuple>
#include <cassert>
#include <bitset>

using namespace std;

#define rep(i, a, n) for(int i = a; i < n; ++i)

const int max1e3 = 1e3;
const int max1e4 = 1e4;
const int max1e5 = 1e5;

int main(void){
    int h, w;
    cin >> h >> w;

    char c[max1e3][max1e3];
    rep(i,0,h){
        rep(j,0,w){
            cin >> c[i][j];
        }
    }

    int cnt=0;
    rep(_w,0,w){
        cnt = 0;
        rep(_h,0,h){
            if(c[_h][_w] == '#'){
                cnt++;
            }
        }
        cout << cnt << ' ';
    }
    cout << endl;
    return EXIT_SUCCESS;
}