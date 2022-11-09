#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) = for(int i=j;i<k;j++);


int main(void){
    ll a, b;
    cin >> a >> b;

    vector<string> normal(a);
    for(auto &v: normal) cin >> v;
    vector<string> express(b);
    for(auto &v: express) cin >> v;

    ll idx=0;
    for(auto &stop_station: normal){
        if(stop_station==express[idx]){
            idx++;
            cout << "Yes" << endl;
        } 
        else {
            cout << "No" << endl;
        }
    }

    return EXIT_SUCCESS;
}