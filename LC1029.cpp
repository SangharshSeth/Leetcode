#include <bits/stdc++.h>
using namespace std;
//two city scheduling
int main()
{
    int result=0;
    vector<vector<int>> cs = {
        {10, 20},
        {30, 200},
        {400, 50},
        {30, 20},

    };
    //sort the 2d grid acording to difference between B cost and A cost
    sort(begin(cs), end(cs), [](vector<int> &a, vector<int> &b) {
        return (a[0] - a[1] < b[0] - b[1]);
    });
    //pick A cost from first half and B cost from rest for optimal cost
    for(int i = 0;i<cs.size()/2;i++){
        result+=cs[i][0]+cs[i+cs.size()/2][1];
    }
    cout<<result;
    

    return 0;
}