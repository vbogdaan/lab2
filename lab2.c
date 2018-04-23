#include<stdio.h>
int main(void)
{
 float a,b,c,d;
printf("Enter a:");
scanf("%f",&a);
printf("Enter b:");
scanf("%f",&b);
printf("Enter c:");
scanf("%f",&c);
d=b*b-4*a*c;
printf("D = %.2f",d);
if(d<0) printf("(equation has no real roots)\n");
if(d==0) printf("(equation has single roots)\n");
if(d>0) printf("(equation has two roots)\n");
return 0;
}
