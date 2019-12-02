#include <bits/stdc++.h>
using namespace std;
int MaxArea(vector<int> &height)
{
  int maxarea = INT_MIN;
    int startpointer = 0;
    int endpointer = height.size()-1;
   
    int high;
    while (startpointer != endpointer)
    {
        high = min(height[startpointer], height[endpointer]);
       
        maxarea = max(maxarea, high * (endpointer - startpointer));
    
        
        if (height[startpointer] == height[endpointer])
            endpointer--;

        if (high == height[startpointer])
            startpointer++;
        if (high == height[endpointer])
            endpointer--;
    }
    return maxarea;
}
int main(){
    vector<int>v{1,8,6,2,5,4,8,3,7};
    cout<<MaxArea(v);
    return 0;
}