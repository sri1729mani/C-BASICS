#include<stdio.h>
main()
{
    int a ,n,pro=1;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        pro *= a;
    }
    printf("%d",pro);
}