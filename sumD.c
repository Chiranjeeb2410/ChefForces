#include<stdio.h>

int main()  {

    int t;
    int n;
    scanf("%d", &t);
    while(t--)  {
        scanf("%d", &n);
        int temp=0;
        while(n!=0)  {
            temp=temp+n%10;
            n=n/10;
        }
    printf("%d\n", temp);
    }
    return 0;
}