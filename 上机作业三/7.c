# include <stdio.h>
int main()
{
    int sex, weight, cube;
printf("请给出输血者的性别和体重：");
scanf("%d,%d",&sex,&weight);
if(sex >= 0)
{
    if(weight >= 120)
{
 cube = 200;
printf("此人应该输血：%d 毫升\n", cube);
}
else
{
cube = 180;
printf("此人应该输血：%d 毫升\n", cube);
}
}
else 
{
if(weight >= 100)
{ cube = 150;
printf("此人应该输血：%d 毫升\n", cube);
}
else
{
cube = 120;
printf("此人应该输血：%d 毫升\n", cube);
}
}
return 0;
}