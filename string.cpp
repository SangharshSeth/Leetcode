#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "higuysthisisme";
    for (auto i : s)
    {
        if (i == 'i')i = '1';
    }
    cout<<s;
    return 0;
}