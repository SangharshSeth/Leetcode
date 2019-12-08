#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> result;
        if (matrix.size() == 0)
            return {};
        int startrow = 0;
        int endrow = matrix.size() - 1;
        int startcolumn = 0;
        int endcolumn = matrix[0].size() - 1;
        while (startrow <= endrow and startcolumn <= endcolumn)
        {
            for (int i = startcolumn; i <= endcolumn; i++)
            {
                result.push_back(matrix[startrow][i]);
            }
            startrow++;
            for (int i = startrow; i <= endrow; i++)
            {
                result.push_back(matrix[i][endcolumn]);
            }
            endcolumn--;
            if (startrow <= endrow)
            {
                for (int i = endcolumn; i >= startcolumn; i--)
                {
                    result.push_back(matrix[endrow][i]);
                }
            }
            endrow--;

            if (startcolumn <= endcolumn)
            {
                for (int i = endrow; i >= startrow; i--)
                {
                    result.push_back(matrix[i][startcolumn]);
                }
            }
            startcolumn++;
        }

        return result;
    }
};
vector<vector<int>>grid(rows,vector<int>(cols));