
#include <stdio.h>
void hoanvi(int px, int py)
{
            int pz;
            pz=px; px=py; py=pz;
};
void main()
{
            int a=40, b=50; hoanvi(a,b);
            printf("%d %d",a,b);
};
