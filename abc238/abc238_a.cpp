#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    if(n*log10(2)>2*log10(n)) cout << "Yes";
    else cout << "No";
    return EXIT_SUCCESS;
}