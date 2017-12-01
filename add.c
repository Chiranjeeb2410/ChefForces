#include<stdio.h>

int main()  {
    long int a,b;
    int w;
    scanf("%d", &w);
    while(w--)  {
        scanf("%ld %ld", &a,&b);
        printf("%ld\n", a%b);
    }
    return 0;
}