#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int x;
};
int cal(A *p)
{
    A *q = p + 1;
    return (int)q - (int)p;
}
int main()
{
    A a;
    A *p = &a;
    cout << cal(p);
    return 0;
}