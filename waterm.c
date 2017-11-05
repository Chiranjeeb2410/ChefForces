#include<stdio.h>

int n;
int main()  {
    scanf("%d", &n);
    if(n==2)  {
        printf("No\n");
    }
    else if(n%2==0)   {
        printf("Yes\n");
    }
    else    {
        printf("No\n");
    }
}
