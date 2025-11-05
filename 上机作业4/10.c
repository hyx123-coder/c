#include <stdio.h>
int main()
{ int i,j,k,n=0;
 for (i=0;i<=20;i++)
 for (j=0;j<=50;j++)
 {for (k = 0; k <= 100; k++)
                if (5 * i + 3 * j + k / 3 == 100 && k % 3 == 0)
                {n++;
                    printf(" µÚ%d ÖÖ: %3d %3d %3d",n,i,j,k);
 if(n%3==0)printf (" \n ");
}
 }
return 0;
}