#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i = 0;i<row;i++){
        for(int j = i;j<col;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}
int main()
{
    vector<vector<int>>arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    
    };
    
    int rows = arr.size();
    int cols = arr[0].size();
    rotate(arr);
     for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}