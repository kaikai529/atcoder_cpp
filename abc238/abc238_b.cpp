#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    vector<int> a(n, 0);
    for(auto &v: a) cin >> v;

    vector<int> pizz(360,0);
    int this_arg = 0;
    pizz[0] = 1;
    for(auto &v: a){
        this_arg += v;
        this_arg %= 360;
        pizz[this_arg] = 1;
    }

    vector<int> ans; 
    int cnt=0;
    for(auto &v: pizz){
        if(v==1){
            ans.push_back(cnt);
            cnt = 0;
        }
        cnt += 1;
    }
    ans.push_back(cnt);

    int max_arg = *max_element(begin(ans), end(ans));
    cout << max_arg << endl;
    return EXIT_SUCCESS;
}