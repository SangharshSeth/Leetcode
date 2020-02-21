#include <bits/stdc++.h>
using namespace std;
bool Solve(const string& s,int no_of_repeat){
    int length = s.length();
    int sub_length = length/no_of_repeat;
    string sub_string = s.substr(0,sub_length);
    for(int i = 1;i<no_of_repeat;i++){
        int start = sub_length*i;
        int end = sub_length;
        if(s.substr(start,end)!=sub_string)
            return false;
    }
    return true;
}
bool repeatedSubstringPattern(const string& s)
{
    map<char, int> frequency;
    vector<int> no_of_repeats;
    int min = INT32_MAX;
    int max = INT32_MIN;
    for (char i : s)
    {
        frequency[i]++;
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
        return max > 1;
    if (min <= 1)
        return false;
    //max number of repetition
    int no_of_repeat = __gcd(max, min);
    if (no_of_repeat == 1)
        return false;
    no_of_repeats.push_back(no_of_repeat);
    //get factors
    for (int i = no_of_repeat / 2; i >= 2; i--)
    {
        if (no_of_repeat % i == 0){
            no_of_repeats.push_back(i);
        }
    }
    for(auto i:no_of_repeats){
        if(Solve(s,i))
            return true;
    }
    return false;

}
int main()
{
    string s;
    cin>>s;
    if(repeatedSubstringPattern(s))
        cout<<"true";
    else
        cout<<"false";

    return 0;
}
