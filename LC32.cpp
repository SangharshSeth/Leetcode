#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int maxllength = 0;
        stack<int> stackk;
        stackk.push(-1);
        for (int i = 0; i < s.length(); i++)
        {
            //if encounter ( then push its index to stack
            if (s[i] == '(')
            {
                stackk.push(i);
            }
            //if encounter ) then pop once
            //if empty push its index
            //else calculate length by current index-index on top of stack
            else
            {
                stackk.pop();
                if (stackk.empty())
                {
                    stackk.push(i);
                }
                else
                {
                    maxllength = max(maxllength, i - stackk.top());
                }
            }
        }
        return maxllength;
    }
};