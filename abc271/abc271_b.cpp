#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, q;
    cin >> n >> q;

    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        int l;
        cin >> l;
        a[i].resize(l);
        for(auto &v: a[i]) cin >> v;
    }

    for(int i=0;i<q;i++){
        int s,t;
        cin >> s >> t;
        cout << a[s-1][t-1] << endl;        
    }

    return EXIT_SUCCESS;
}