#include <bits/stdc++.h>
using namespace std;
int hammingDistance(int x, int y)
{

    vector<int> xx;
    vector<int> yy;
    int count = 0;
    int i;
    for (i = 0; i < 32; ++i)
    {
        xx.push_back((x >> i) & 1);
    }
    for (i = 0; i < 32; ++i)
    {
        yy.push_back((y >> i) & 1);
    }
    for (int i = 0; i < 32; i++)
    {
        if (xx[i] ^ yy[i] == 1)
            count++;
    }
    return count;
}
int main()
{
    hammingDistance(1, 4);
    return 0;
}