#include<stdio.h>

int main()  {
    int a,b,c;
    int x,y,z,w,p,q;
    scanf("%d %d %d", &a,&b,&c);
    x=a+b*c;
    y=a*(b+c);
    z=a*b*c;
    w=(a+b)*c;
    p=a+b+c;
    q=a*b*c;
    if(x>y && x>z && x>w && x>p && x>q)   {
        printf("%d\n", x);
    }
    else if(y>x && y>z && y>w && y>p && y>q)  {
        printf("%d\n", y);
    }
    else if(z>y && z>x && z>w && z>p && z>q)  {
        printf("%d\n", z);
    }
    else if(w>z && w>y && w>x && w>p && w>q)  {
        printf("%d\n", w);
    }
    else if(p>z && p>y && p>x && p>w && p>q)   {
        printf("%d\n", p);
    }
    else    {
        printf("%d\n", q);
    }

}
