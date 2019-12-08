#include<bits/stdc++.h>
using namespace std;
int main()
{
 auto iseven = [](int x){
     return x % 2 == 0 ;
 };
 vector<int>v = {1,2,3,4,5,6,7,8,9,0};
 for_each(v.begin(),v.end(),iseven);

  return 0;
}