#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long n, k, digit, num=1;
	cin >> n >>k;
	for(int i=0;i<k;i++){
		num *= 10;
        digit = n%num;

        n /= num;
        if(digit>=5*num/10){
            n++;
        }
        n*=num;
	}
	cout << n << endl;
    return EXIT_SUCCESS;
}