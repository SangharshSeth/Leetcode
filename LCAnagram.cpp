class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
   map<string,vector<string>>hashtable;
   string temp;
    vector<vector<string>>Result;
    for(int i = 0;i<strs.size();i++){
        temp = srts[i];
        sort(strs[i].begin(),strs[i].end());
        hashtable[strs[i]].push_back(temp);
    }
   for(auto i:hashtable)
       Result.push_back(i.second);
        
        
        
 return Result;
    }
};
