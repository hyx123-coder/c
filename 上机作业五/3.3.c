#include <stdio.h>
 int main( )
 { int i,n,a[10],av=0;
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{ printf("%d ",a[i]);
if((i+1) %3==0){
printf("\n"); }
}
for(i=0;i<n;i++)
av+=a[i];
float average = (float)av /n;
printf("av=%.2f\n",average); 
 return 0;
}