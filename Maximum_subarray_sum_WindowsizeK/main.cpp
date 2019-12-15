#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&v,int k){
    int left{0};
    int right{0};
    int window_sum{0};
    int result{0};
    if(v.size()==1)
        return v[0];
    for( right = 0;right<v.size();right++){
        window_sum = window_sum + v[right];
        if(right>=k-1){
            result = max(result,window_sum);
            window_sum = window_sum-v[left];
            left++;
        }
    }
    return result;

}
int main() {
    vector<int>v{2, 3, 4, 1, 5};
    int result = solve(v,3);
    cout<<result;
    return 0;
}
