#include<stdio.h>

int main()  {
    int n,m,a,num=0;
    scanf("%d %d %d", &n,&m,&a);
    int area=0, sqr=0;
    area = n*m;
    sqr=a*a;
    num=area%sqr;
    printf("%d\n", num);
}
