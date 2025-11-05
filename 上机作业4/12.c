#include<stdio.h>
int main()
{ int i,n,s;
    while(scanf("%d",&n)!=EOF)
    {
 s=1;
 for(i=1;i<=n;i++)
 s=s*i;
 printf("%d! = %d\n",n,s);
    }
 return 0;
 }