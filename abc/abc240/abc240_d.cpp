#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int cnt = 0;
    vector<pair<int,int>> ball;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        cnt+=1;
        // 前のボールを確認
        if(ball.empty() or ball.back().first!=a){
            ball.emplace_back(a,1);
        } else {
            ball.back().second += 1;
            if(ball.back().second == a){
                cnt -= a;
                ball.pop_back();
            }
        }
        cout << cnt << endl;
    }
    

    return EXIT_SUCCESS;
}

// 代入にも種類がある
// - emplace_back
// - emplace
// - push_back