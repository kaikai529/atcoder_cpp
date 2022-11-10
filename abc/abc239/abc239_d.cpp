#include <bits/stdc++.h>
using namespace std;

vector<int> prime(int n){
    vector<int> ans={2};
    for(int pos=3;pos<n+1;pos++){
        bool flag = true;
        for(auto &i: ans){
            if(pos%i==0){
                flag=false;
                break;
            }
        }
        if(flag) ans.push_back(pos);
    }
    return ans;
}

int main(void)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> primes = prime(200);
    vector<int> prime_list(201, 0);
    for(auto &v: primes) prime_list[v]=1;

    bool flag = true;
    for(int i=a;i<=b;i++){
        flag=true;
        for(int j=c;j<=d;j++){
            if(prime_list[i+j]==1) flag=false;
        }
        if(flag) break;
    }

    cout << (flag ? "Takahashi":"Aoki") << endl;
    return EXIT_SUCCESS;
}