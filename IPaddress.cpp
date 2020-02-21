#include <bits/stdc++.h>
using namespace std;
//ex:
//convert "255.100.50.0" to "255[.]200[.]50[.]0"
class Solution
{
public:
    string defangIPaddr(string address)
    {
        vector<char> c;
        stack<char> s;
        string r;
        for (int i = 0; i < address.length(); i++)
        {
            c.push_back(address[i]);
        }
        for (int i = 0; i < c.size(); i++)
        {
            if (isdigit(c[i]) and i == c.size() - 1)
            {
                s.push(c[i]);
                break;
            }
            if (isdigit(c[i]) and !isdigit(c[i + 1]))
            {
                s.push(c[i]);
                s.push('[');
                s.push(c[i + 1]);
            }
            else if (isdigit(c[i]))
            {
                s.push(c[i]);
            }
            else if (!isdigit(c[i]) and isdigit(c[i + 1]))
            {
                s.push(']');
            }
        }
        while (!s.empty())
        {
            r += s.top();
            s.pop();
        }
        reverse(r.begin(), r.end());

        return r;
    }
};
int main()
{

    return 0;
}