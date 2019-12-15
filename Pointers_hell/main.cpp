#include <iostream>
void fun(int **pptr)
{
    static int q = 10;
    *pptr = &q;
}

int main()
{
    int r = 20;
    int *p = &r;
    fun(&p);
    printf("%d", *p);
    return 0;
}
