#include <bits/stdc++.h>
using namespace std;
bool checkStraightLine(vector<vector<int>>& coordinates) {
    for(int i = 2;i < coordinates.size(); ++i){
        if(coordinates.size() < 3)
            return true;
        int y1 = coordinates[i][1]-coordinates[i-1][1];
        int x1 = coordinates[i][0]-coordinates[i-1][0];
        int y0 = coordinates[i-1][1]-coordinates[i-2][1];
        int x0 = coordinates[i-1][0]-coordinates[i-2][0];
        if(y1 * x0 != y0 * x1)
            return false;
    }
    return true;
}
int main() {
    vector<vector<int>>v{{1,2},{2,3},{5,5}};
    cout<<checkStraightLine(v);
    return 0;
}
