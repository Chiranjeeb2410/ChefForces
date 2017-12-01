#include<stdio.h>

int main()  {
    int n;
    long int qnt, price;
    float exp;
    scanf("%d", &n);
    while(n--)  {
        scanf("%ld %ld", &qnt,&price);
        exp=qnt*price;
        if(qnt>1000)    {
            exp=exp-(.1*exp);
            printf("%f\n", exp);
        }
        else
            printf("%f\n", exp);
    }
    return 0;
}