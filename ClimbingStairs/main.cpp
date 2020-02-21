//Dynamic Programming Leetcode Climbing Stairs
#include <iostream>
#include <vector>
using namespace std;
//top down with memoization
int solve(int n,vector<int>& v){
    if(n == 0)
        return 1;
    if(n < 0)
        return 0;
    if(v[n] > 0)
        return v[n];
    v[n] = solve(n-1,v) + solve(n-2,v);
    return v[n];
}
/*
 * Bottom Up
 * vector<int>v(n+1);
 * v[0]=1;
 * v[1]=1;
 * for(int i = 2;i < v.size();i++){
 *     v[i] = v[i-1] + v[i-2];
 * }
 * return v[n];
 */
int main() {
    int n{6};
    vector<int>v(n+1);
    cout << solve(n,v) << endl;
    return 0;
}
