#include <stdio.h>

int main()  {
    float sal,hra,da,gross;
    long int w;
    scanf("%d", &w);
    while(w--)  {
    scanf("%f", &sal);
        if(sal<1500)    {
            hra=.1*sal;
            da=.9*sal;
        }
        else    {
            hra=500;
            da=.98*sal;
        }
        gross=sal+hra+da;
        printf("%.1f\n", gross);
    }
    return 0;
}