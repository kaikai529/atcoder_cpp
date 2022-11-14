#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)
#define rrep(val_name,start,end) for(ll val_name=(ll)start;val_name>=end; val_name--)
#define vrep(element, vec) for(auto &element:vec)

int ctoi(char c) {return c - '0';}

int main(void){
    // input
    int n, k; cin >> n >> k;
    vector<pair<int, int>> students;
    rep(id, 0, n){
        int a, b, c;
        cin >> a >> b >> c;
        students.push_back({a+b+c, id});
    }

    // get boaderline
    sort(students.rbegin(), students.rend());
    int boader = students[k-1].first;

    // output
    vrep(s, students) swap(s.first, s.second);
    sort(students.begin(), students.end());
    vrep(s, students){
        if (boader-300<=s.second) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return EXIT_SUCCESS;
}