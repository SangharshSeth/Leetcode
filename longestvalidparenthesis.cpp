#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int length = s.length();
        int result = 0;
        int left = 0;
        int right = 0;
        for (int i = 0; i < length; i++)
        {
            if (s[i] == '(')
                left++;
            else
                right++;
            if (left == right)
            {
                result = max(result, 2 * right);
            }
            else if (right >= left)
            {
                left = 0;
                right = 0;
            }
        }
        left = 0;
        right = 0;
        //to handle caseslike (((()))
        for (int i = length - 1; i >= 0; i--)
        {
            if (s[i] == '(')
                left++;
            else
                right++;
            if (left == right)
            {
                result = max(result, 2 * left);
            }
            else if (left >= right)
            {
                left = 0;
                right = 0;
            }
        }
        return result;
    }
};
int main()
{

    return 0;
}