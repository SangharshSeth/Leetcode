//Legth Longest substring without repeating characters
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int MaxLength(string s)
{
    int length = s.length();
    if (length == 0)
        return 0;
    int result = -1;
    //keep track of unique characters to build a substring
    unordered_set<char> ch;
    //sliding window protocol
    int leftptr = 0;
    int rightptr = 0;
    //increment the right pointer and store each unique characters
    //when found duplicate remove that from the set and increment the leftpointer to begin constructing a new substring
    while (rightptr < length)
    {
        if (ch.insert(s.at(rightptr)).second)
        {
            rightptr++;
            result = max(result, rightptr - leftptr);
        }
        else
        {
            ch.erase(s.at(leftptr));
            leftptr++;
        }
    }
    return result;
}
int main()
{
    string s = "whatthehell";
    int result = MaxLength(s);
    cout << result;

    return 0;
}