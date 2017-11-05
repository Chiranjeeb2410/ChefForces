#include<stdio.h>

int main()  {

    int x;
    float y,z;
    scanf("%d %f", &x, &y);
    if(y>=0 && y>x+0.5)  {
        if(x%5 == 0)    {
            z = y-(x+0.5);
            printf("%0.2f\n", z);
        }
        else    {
            printf("%0.2f\n", y);
        }
    }
    else    {
        printf("%0.2f\n", y);
    }
    return 0;
}
