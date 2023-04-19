#include<stdio.h>
#include<math.h>
int main()
{
float y, x, z;

printf("     我想 趁你睡觉的时候看着你傻笑\n");
printf("     我想 给你的书包里塞零食\n");
printf("     我想 表面上欺负你其实背地里保护你\n");
printf("     我想 必要的时候为你挺身而出\n");
printf("     我想 为了你为了我们的将来好好学习努力奋斗\n");
printf("        我的猪猪女孩  祝你 生日快乐！！！");

for (double y = 2.5; y >= -1.6; y = y - 0.2)
{
for (double x = -3; x <= 4.8; x = x + 0.1)
{
(pow((x*x + y*y - 1), 3) <= 3.6*x*x*y*y*y
|| (x>-2.4 && x<-2.1 && y<1.5 && y>-1)
|| (((x<2.5 && x>2.2) || (x>3.4 && x<3.7)) && y>-1 && y<1.5)
|| (y>-1 && y<-0.6 && x<3.7 && x>2.2)) ? printf("*") : printf(" ");
}

printf("\n");
}
getchar();
}
