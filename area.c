#include<stdio.h>
int main(){
   float r,area,circumference;
   printf("enter r");
   scanf("%f",&r);
   area=3.14*r*r;
   printf("area=%f",area);
   circumference= 2*3.14*r;
   printf("circumference=%f",circumference);
   return 0;
}
