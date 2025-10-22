/*void main()
{
    int a =5;
    char c ='a';
    float f =5.3;
    double m =13.65;
    double result;

printf("a + c = %d\n",a+c);
printf("a + c = %c\n", a + c);
printf("f + m = %f\n", f + m);
printf("a + m = %f\n", a + m);
printf("c + f = %f\n", c + f);
result=a+c*(f+m);
printf("double+%f\n",result);
}*/

/*void main()
{
    printf("how are you?\n");
    printf("i am fine.\n\n");
    printf("how are you?\t");
    printf("i am fine.\n\n");
    printf("how are you?\n");
    printf("\bi am fine.\n\n");
    printf("\r i am fine.");
    printf("\r how are your?\n\n");
}*/


/*#include <stdio.h>
int main ()
{char c1,c2;
c1=97;c2=98;
printf("%c,%c\n",c1,c2);
return 0;
}*/

/*#include <stdio.h>
int main ()
{int c1,c2;
c1=97;c2=98;
printf("%c,%c\n",c1,c2);
return 0;
}*/

/*#include <stdio.h>
int main ()
{char c1,c2;
c1=321;c2=400;
printf("%c,%c\n",c1,c2);
return 0;
}*/

/*#include<stdio.h>
int main ()
{float x,y;
scanf("%f",&x);
printf("\n2.4*x-1/2=%f",2.4*x-1.0/2);
printf("\nx%%2/5-x=%f",(int)(x)%2/5-x);
 printf("\n(x-=x*10,x/=10)=%d\n",(x-=x*10,x/=10)); 
 return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i,j,m,n;
    i=8;j=10;
    m=++i;
    n=j++;
    printf("%d,%d,%d,%d\n",i,j,m,n);
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int i,j,m,n;
    i=8;j=10;
    m=i++;
    n=++j;
    printf("%d,%d,%d,%d\n",i,j,m,n);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i,j,m=0,n=0;
    i=8;j=10;
    m+=i++;
    n-=--j;
    printf("%d,%d,%d,%d\n",i,j,m,n);
    return 0;
}*/

/*#include <stdio.h>
int main()
{char a; int b;
printf("A");
scanf("%c",&a);
b=(int)a;
printf("\n\n%c的ASCⅡ码为%d\n",a,b);
return 0;
}*/

/*#include<stdio.h>
int main( )
{ int a;
scanf("%d",&a);
printf("\n%d(10) ,%o(8), %x(16)\n",a,a,a ); 
return 0;
}*/

/*#include <stdio.h>
 int main( )
 { int u=89,v=89;
 printf("u=%d,v=%d\n",u,v); 
 return 0;
 }*/

 /*#include <stdio.h>
int main()
{
int x,y;
double a;
scanf("%d,%d",&x,&y); 
a=(x+y)/2.0;
printf("The average is %lf\n", a);
return 0;
}*/

/*#include <stdio.h>
int main() {
    // 定义三个分数对应的浮点数
    double num1 = 1.0 / 2.0;
    double num2 = 1.0 / 3.0;
    double num3 = 1.0 / 4.0;
    // 计算它们的和
    double sum = num1 + num2 + num3;
    // 输出结果
    printf("%.6f\n", sum);
    return 0;
}*/

#include<stdio.h>
#define pi 3.14
int main()
{int r;
 double c,s;
 scanf("%d",&r);
 c=2*r*pi;
 s=pi*r*r;
 printf("圆的周长:%.3lf\n圆的面积:%.3lf\n",c,s);
}