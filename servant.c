#include<stdio.h>

int main()  {
    int t,n;
    int temp=-1;
    scanf("%d", &t);
    while(t--)  {
        scanf("%d", &n);
        if(n<10)    {
            printf("What an obedient servant you are!\n");
        }
        else    {
            printf("%d\n", temp);
        }
    }
    return 0;
}