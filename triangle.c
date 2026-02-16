#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter length of sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if (a == b && b == c)
   { printf("The triangle is Equilateral");}
else if (a == b || b == c || a ==c)
{printf("The traingle is isoceles");}
else {printf("Triangle is scalene");}
return 0;
}