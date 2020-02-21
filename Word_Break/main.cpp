#include <bits/stdc++.h>
using namespace std;
bool wordBreak(const string& s, vector<string>& wordDict) {
    unordered_set<string>words(wordDict.cbegin(),wordDict.cend());
    int size = s.size();
    vector<bool>dynamic(size+1,false);
    dynamic[0]=true;
    for(int i = 1;i<=size;++i){
        for(int j = 0;j<=i-1;++j){
            if(dynamic[j]){
                string temp = s.substr(j,i-j);
                if(words.find(temp)!=words.end()){
                    dynamic[i]=true;
                    cout<<temp<<" "<<i<<" "<<j<<endl;

                }

            }
        }
    }
    return dynamic[size];
}
int main() {
    string s = "leetcode";
    vector<string>wordDict{"leet","code"};
    if(wordBreak(s,wordDict)){
        cout<<true;
    }
    return 0;
}
