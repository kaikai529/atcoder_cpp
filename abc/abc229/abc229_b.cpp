#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)
#define vrep(element, vec) for(auto &element:vec)

int ctoi(char c) {return c - '0';}

int main(void){
    string a, b; cin >> a >> b;
    
    rep(digit, 0, min(a.size(), b.size())){
        int element_a = ctoi(a[a.size()-1-digit]);
        int element_b = ctoi(b[b.size()-1-digit]);
        if (element_a+element_b>=10){
            cout << "Hard";
            return EXIT_SUCCESS;
        }
    }

    cout << "Easy";
    return EXIT_SUCCESS;
}