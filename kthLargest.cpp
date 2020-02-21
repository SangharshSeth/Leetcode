#include <bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (auto i : nums)
    {
        minHeap.push(i);
        if (minHeap.size() > k)
            minHeap.pop();
    }
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << i <<" ";
    //     minHeap.push(nums[i]);
    //     if (minHeap.size() > k)
    //         minHeap.pop();
    // }
    return minHeap.top();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v{2, 1, 5, 3, 22, 77, 45};
    cout << findKthLargest(v, 5);

    return 0;
}