#include <stdio.h>

int main()

{
    int a,b,c,lar,seclar,z;
    scanf("%d", &z);
    while(z--)  {
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&b>c||a<b&&b<c)
    {
        printf("%d", b);
    }

    if(b>a&&a>c||b<a&&a<c )
    {
        printf("%d", a);
    }
    if(b>c&&c>a||b<c&&c<a)
    {
        printf("%d\n", c);
    }
    }

}
