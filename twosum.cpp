#include <bits/stdc++.h>
using namespace std;
vector<int> tu(vector<int> &v, int target)
{
    target = target - 30;
    int maximum = INT32_MIN;
    map<int, int> map;
    vector<int> result;
    int complement;
    for (int i = 0; i < v.size(); i++)
    {
        complement = target - v[i];
        auto it = map.find(complement);
        if (it != map.end())
        {
            if (max(v[i], complement) > maximum)
            {
                maximum = max(v[i], complement);
                result = {i, map[complement]};
            }
        }
        map[v[i]] = i;
    }
    return result;
}
int main()
{
    //two sum
    vector<int> v = {20, 50, 40, 25, 30, 10};
    vector<int> result = twosum(v, 90);
    for (auto i : result)
        cout << i << " ";

    return 0;
}