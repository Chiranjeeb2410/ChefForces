#include<stdio.h>

int main()  {
    long int dist ;
    long int final;
    long int rem;
    scanf("%ld", &dist);
    int d=dist/5;
    if(dist%5!=0)   {
            final=dist/5;
            rem=final+1;
    }
    else
        rem=d;
    printf("%ld\n", rem);

}
