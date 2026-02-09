#include<stdio.h>
void main(){
    int a,b,c,d,e,sum;
    float per;
    printf("enter the no.-");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per=(float)sum/5.0;
    printf("sum=%d \n percentage=%.2f",sum,per);
}