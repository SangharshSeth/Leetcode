#include <bits/stdc++.h>
using namespace std;
int main()
{
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    //array of words from string
    vector<string> tokens;
    string res;
    int max = INT32_MIN;
    //banned words
    vector<string> banned = {"hit"};
    //transfer the banned words into a set for faster lookup
    set<string> bannedset;
    //map to store string and frequency
    map<string, int> map;
    //convert a string to lowercase
    for_each(paragraph.begin(), paragraph.end(), [](char &c) {
        c = ::tolower(c);
    });
    //insert banned words into bannedset
    for (auto i : banned)
    {
        bannedset.insert(i);
    }
    char curr;
    //replace each non alphabetic character with space
    for (int i = 0; i < paragraph.length(); i++)
    {
        curr = paragraph[i];

        if (isalpha(curr) || curr == ' ')
            continue;
        else
        {
            paragraph.erase(paragraph.begin() + i);
            paragraph.insert(i, 1, ' ');
        }
    }
    int j = 0;
    //convert a string into streams to extract each word and transfer each word to a vector
    istringstream ss(paragraph);
    do
    {
        string word;
        ss >> word;
        tokens.push_back((word));

    } while (ss);
    //check if each word exist in the banned list and calculate their frequency
    //return the word with highest frequency
    for (auto i : tokens)
    {
        if (bannedset.find(i) == bannedset.end())
        {
            ++map[i];
            {
                if (map[i] > max)
                {
                    max = map[i];
                    res = i;
                }
            }
        }
    }
    cout << res;

    return 0;
}