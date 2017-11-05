#include<stdio.h>

int main()  {
    int n;
    scanf("%d", &n);
    while(n--)  {
        long int a,b;
        scanf("%ld %ld", &a, &b);
        if(a>b) {
            printf(">\n");
        }
        else if(a<b)    {
            printf("<\n");
        }
        else    {
            printf("=\n");
    }
    }
}