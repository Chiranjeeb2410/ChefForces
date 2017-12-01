#include<stdio.h>

int main()  {
    int n,k;
    scanf("%d %d", &n,&k);
    int arr[n];
    for(int i=0;i<n;i++)    {
        scanf("%d", &arr[i]);
    }
    int count=1;
    while(k--)  {
        count++;
    }
    printf("%d\n", count);

}