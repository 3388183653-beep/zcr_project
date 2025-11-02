#include<stdio.h>
int main()
{
    int a , b , c ;
printf("请输入第一条边的长度a:\n");
scanf("%d", &a );
printf("请输入第二条边的长度b:\n");
scanf("%d", &b );
printf("请输入第三条边的长度c:\n");
scanf("%d", &c );
if(a + b > c && a + c > b && b + c > a )
{
   if(a==b && b==c)
   {
    printf("等边三角形\n");
   }
   else if(a==b || a==c || b==c )
   {
    printf("等腰三角形\n");
   }
   else
   {
    printf("普通三角形\n");
   }
}
else
{
    printf("非三角形\n");
}
 return 0;
}



























