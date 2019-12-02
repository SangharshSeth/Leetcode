#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Threesum(vector<int> &nums)
{

    vector<vector<int>> result;
    vector<int> temp;
    sort(nums.begin(), nums.end());
    if (nums.size() <= 2)
        return result;

    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right)
        {
            int target = nums[i] + nums[left] + nums[right];
            if (target < 0)
                left++;
            else if (target > 0)
                right--;
            else
            {
                temp = {nums[i], nums[left], nums[right]};
                result.push_back(temp);
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;

                left++;
                right--;
            }
        }
    }
    return result;
}

int main()
{
    return 0;
}