#include <bits/stdc++.h>
using namespace std;
//Leetcode problem
//Number of paindromic substring in a string
int main()
{
    string s;
    cin >> s;
    int counter = 0;
    int size = s.length();
    int maxlength = 0;
    vector<vector<int>> matrix(size, vector<int>(size, 0));
    for (int k = 0; k < size; k++)
    {
        counter++;
        matrix[k][k] = true;
    }
    maxlength = 1;
    for (int j = 1; j < size; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if (s[j] == s[i] && j - i <= 2)
            {
                counter++;
                matrix[i][j] = true;
                maxlength = max(maxlength, (j - i) + 1);
            }
            else if (s[i] == s[j] && j - i > 2)
            {
                if (matrix[i + 1][j - 1])
                {
                    counter++;
                    matrix[i][j] = matrix[i + 1][j - 1];
                    maxlength = max(maxlength, (j - i) + 1);
                }
                else
                    matrix[i][j] = matrix[i + 1][j - 1];
            }
            else
            {
                matrix[i][j] = false;
            }
        }
    }
    for(int k = 0;k<size;k++){
        for(int l = 0;l<size;l++){
            cout<<matrix[k][l]<<" ";
        }
        cout<<endl;
    }
    
    return  maxlength;

    return 0;
}