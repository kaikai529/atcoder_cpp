#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;

    int left = 0;
    for(int idx=0;idx<s.size();idx++){
        if(s[idx]=='a') left++;
        else break;
    }

    int right = 0;
    for(int idx=s.size()-1;idx>=0;idx--){
        if(s[idx]=='a') right++;
        else break;
    }

    // all a
    if(right==s.size()){
        cout << "Yes";
        return EXIT_SUCCESS;
    }

    // left > right
    if(left>right){
        cout << "No";
        return EXIT_SUCCESS;
    }

    int ok = 1;
    for(int idx=left;idx<s.size()-right;idx++){
        if(s[idx]!=s[left+s.size()-right-idx-1]) ok = 0;
    }

    cout << (ok ? "Yes":"No");
    return EXIT_SUCCESS;
}