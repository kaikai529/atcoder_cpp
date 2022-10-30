#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;

    if(abs(b-a)==1 | abs(b-a)==9) cout << "Yes";
    else cout << "No";
    return EXIT_SUCCESS;
}