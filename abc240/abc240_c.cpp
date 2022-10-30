#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, x;
    cin >> n >> x;

    vector<vector<int>> jump(n, vector<int>(2));
    for(int i=0;i<n;i++){
        for(auto &v : jump[i]) cin >> v;
    }
    
    vector<vector<bool>> flag(n+1,vector<bool>(x+1,false));
    flag[0][0] = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<=x;j++){
            if(0<=j-jump[i][0]){
                flag[i+1][j] = flag[i][j-jump[i][0]];
            }
            
            if(0<=j-jump[i][1]){
                flag[i+1][j] = flag[i+1][j] | flag[i][j-jump[i][1]];
            }
        }
    }

    cout << (flag[n][x] ? "Yes":"No") << endl;
    return EXIT_SUCCESS;
}
