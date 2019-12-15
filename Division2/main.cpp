#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int result=0;
    map<int,int>map;
    int que,mark,maximum;
    int testcase;
    cin>>testcase;
    while(testcase--){
        int size;
        cin>>size;
        for(int i = 0;i < size;i++){
            cin>>que>>mark;
            auto it = map.find(que);
            if(it!=map.end()){
                maximum = max(it->second,mark);
                it->second = maximum;
            }else map[que]= mark;
        }
        for(auto it = map.begin();it!=map.end();it++){
            if(it->first>=9)
                continue;
            else result+=it->second;
        }
        cout<<result<<endl;
        map.clear();
        result=0;
    }
    return 0;
}
