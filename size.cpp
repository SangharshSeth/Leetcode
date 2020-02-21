#include <bits/stdc++.h>
using namespace std;
bool repeatedSubstringPattern(string s)
{
    map<char, int> frequency;
    vector<int> no_of_repeats;
    int min = INT32_MAX;
    int max = INT32_MIN;
    for (int i = 0; i < s.length(); i++)
    {
        frequency[s[i]]++;
    }
    for (auto i : frequency)
    {
        if (i.second > max)
            max = i.second;
        if (i.second < min)
            min = i.second;
    }
    //cerr<<"max"<<" "<<max<<" "<<"min"<<" "<<min;
    if (max == s.length())
        return true;
    if (min <= 1)
        return false;
    //max number of repeation
    int no_of_repeat = __gcd(max, min);
    if (no_of_repeat == 1)
        return false;
    no_of_repeats.push_back(no_of_repeat);
    //get factors
    for (int i = no_of_repeat / 2; i >= 2; i--)
    {
        if (no_of_repeat % i == 0)
    }
}
int main()
{
    string s = "babbaaabbbbabbaaabbbbabbaaabbb";
    repeatedSubstringPattern(s);

    return 0;
}
