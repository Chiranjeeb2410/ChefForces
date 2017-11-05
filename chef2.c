#include<stdio.h>

int main()  {
    int a,b,n;
    scanf("%d", &n);
    while(n--)  {
        scanf("%d %d", &a, &b);
        int max=a+b;
        if(a>b) {
            printf("%d %d\n", a, max);
        }
        else if(a<b) {
            printf("%d %d\n", b, max);
        }
        else if(a=b)    {
            printf("%d %d\n", b, max);
        }c
    }
}

