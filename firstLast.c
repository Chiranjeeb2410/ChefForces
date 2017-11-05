#include<stdio.h>
     
int main()  {
   int t,n;
   int first,last;
   scanf("%d", &t);
   int sum;
   while(t--)  {
       scanf("%d", &n);
       last=n%10;
       while(n!=0) {
        first=n%10;
        n=n/10;
       }
       sum=first+last;
       printf("%d\n", sum);
   }
   return 0;
}
