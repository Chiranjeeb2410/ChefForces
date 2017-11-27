#include<stdio.h>

int main()  {
    int n,count=0;
    scanf("%d", &n);
    int a,b,c;
    while(n--)  {
        scanf("%d %d %d", &a,&b,&c);
        if(a==1 && b==1 && c==1)    {
            count++;
        }
        else if(a==1 && b==1 || b==1 && c==1 || a==1 && c==1)   {
            count++;
        }
    }
    printf("%d\n", count);
}