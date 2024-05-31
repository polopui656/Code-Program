#include <stdio.h>

void swap(int *xp, int *yp)
{
    int t0 = *xp;
    int t1 = *yp;
    *xp = t1;
    *yp = t0;
}

int main()
{
    swap;
    return 0;
}