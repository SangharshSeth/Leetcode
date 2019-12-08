#include <bits/stdc++.h>
using namespace std;
class Solution
{
    /*ex:[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
  //WRITEUP:
  //rows increase left to right
  //columns increase top to bottom
  //we can only move towards larger values form [0,0] and smaller values from [row-1][col-1]
  //but we can move towards both larger values and smaller values from [0][col-1] and [row-1][0]
  //i have the top right approach in code
  //time complexity O(row+col)
]
*/
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (matrix.size() == 0)
            return false;
        //set starting indexes i.e [0][col-1]
        int row = 0;
        int col = matrix[0].size() - 1;
        //loop till boundaries
        while (col >= 0 && row < matrix.size())
        {
            if (target == matrix[row][col])
                return true;
            else if (target > matrix[row][col])
                row++;
            else if (target < matrix[row][col])
                col--;
        }
        return false;
    }
};