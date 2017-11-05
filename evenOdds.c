#include<stdio.h>

int main()  {
    int n,k;
    int temp;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++)    {
        scanf("%d", &a[i]);                                                                                                                             // 1 3 5 2 4
    }
    for(int i=1;i<n;i++)    {
        if(a[i]%2!=0)   {
            temp=a[i-1];
            a[i-1]=a[i];
            a[i-1]=temp;
        }
    }
    for(int i=0;i<n;i++)    {
        printf("%d", a[i]);
    }

}











// 1 2 3 4 5
// 1 3 5 2 4