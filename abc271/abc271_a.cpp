#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    if(n/16<=9) cout << n/16;
    else cout << (char)('A'+n/16-10);

    if(n%16<=9) cout << n%16;
    else cout << (char)('A'+n%16-10);

    return EXIT_SUCCESS;
}