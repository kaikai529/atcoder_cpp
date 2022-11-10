#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &v: a) cin >> v;

    set<int> counter;
    for(auto v: a){
        counter.insert(v);
    }
    cout << counter.size();
    return EXIT_SUCCESS;
}