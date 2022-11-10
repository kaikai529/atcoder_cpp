#include <bits/stdc++.h>
using namespace std;

int main(void){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    vector<pair<int,int>> vec={{1,2}, {2,1}, {1,-2}, {2,-1},
                {-1,2}, {-2,1}, {-1,-2}, {-2,-1}};

    bool flag=false;
    for(auto &[dx1, dy1]: vec){
        int pos_x=x1+dx1, pos_y=y1+dy1;
        for(auto &[dx2, dy2]:vec){
            if((pos_x==x2+dx2) and (pos_y==y2+dy2)){
                flag = true;
            }
        }
    }

    cout << (flag ? "Yes":"No") << endl;
    return EXIT_SUCCESS;
}