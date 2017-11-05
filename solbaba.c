#include<stdio.h>

int main()  {
    int k,n,w;
    int sum=0;
    int rem;
    int temp=0;
    scanf("%d %d %d", &k,&n,&w);
    for(int i=1;i<=w;i++)    {
        sum = sum + i*k;
    }
    if(sum>n)   {
        rem=sum-n;
        printf("%d\n", rem);
    }
    else    {
        printf("%d", temp);
    }
    return 0;
}