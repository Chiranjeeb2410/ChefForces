#include<stdio.h>

int main()  {
    int n;
    scanf("%d", &n);
    int a,b,c;
    for(int i=0;i<n;i++)    {
        scanf("%d %d", &a, &b);
        c=a%b;
        printf("%d\n", c);
    }
    return 0;
}
