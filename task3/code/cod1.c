#include <stdio.h>

void main()
{
int num1,num2;
int sum,difference,product,quotient,remainder;
printf("please enter the first number:");
scanf("%d",&num1);
printf("please enter the second number:");
scanf("%d",&num2);
sum=num1+num2;
difference=num1-num2;
product=num1*num2;
quotient=num1/num2;
remainder=num1%num2;

printf("the sum is %d \n",sum);
printf("the difference is %d \n",difference);
printf("the product= is %d \n",product);
printf("the quotient is %d \n",quotient);
printf("the remainder is %d \n",remainder);

}
