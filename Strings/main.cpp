#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string>s{"a","?","b","aa","c"};
    sort(s.begin(),s.end());
    for(auto i:s)
        cout << i <<" ";
    return 0;
}
