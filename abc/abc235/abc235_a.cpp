#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(val_name,start,end) for(ll val_name=(ll)start;val_name<end; val_name++)


int main(void){
    char a, b, c;
    cin >> a >> b >> c;
    string abc = string({a, b, c});
    string bca = string({b, c, a});
    string cab = string({c, a, b});

    cout << stoi(abc) + stoi(bca)+ stoi(cab);
    return EXIT_SUCCESS;
}

/*
char型を文字列にするときには
string({a, b, c})を用いる
*/