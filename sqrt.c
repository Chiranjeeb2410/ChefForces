#include<stdio.h>
#include<math.h>

int main()  {
    int n,k;
    scanf("%d %d", &n, &k);
    int root;
    while(n--)  {
        root=sqrt(k);
        printf("%d", root);
    }
    return 0;
}