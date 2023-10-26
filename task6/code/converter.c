#include<stdio.h>
void main()
{
int number;
int ten;
int one;
printf("please enter the integer number: ");
scanf("%d",&number);

if (number<20)
{
    switch(number)
    {
    case 0:
        printf("zero");break;
    case 1:
        printf("one");break;
    case 2:
        printf("two");break;
    case 3:
        printf("three");break;
    case 4:
        printf("four");break;
    case 5:
        printf("five");break;
    case 6:
        printf("six");break;
    case 7:
        printf("siven");break;
    case 8:
        printf("eight");break;
    case 9:
        printf("nine");break;
    case 10:
        printf("ten");break;
    case 11:
        printf("eleven");break;
    case 12:
        printf("twelve");break;
    case 13:
        printf("thirteen");break;
    case 14:
        printf("fourteen");break;
    case 15:
        printf("fiveteen");break;
    case 16:
        printf("sixteen");break;
    case 17:
        printf("siventeen");break;
    case 18:
        printf("eighteen");break;
    case 19:
        printf("ninteen");break;
    case 20:
        printf("twinty");break;

    }
}
else
{
  ten=number/10;
  one=number%10;
  switch(ten)
    {
    case 2:
        printf("twinty ");break;
    case 3:
        printf("thertiy ");break;
    case 4:
        printf("fourtiy ");break;
    case 5:
        printf("fivetiy ");break;
    case 6:
        printf("sixtiy ");break;
    case 7:
        printf("siventiy" );break;
    case 8:
        printf("eighttiy ");break;
    case 9:
        printf("nintiy ");break;
}
switch(one)
    {
    case 1:
        printf("one");break;
    case 2:
        printf("two");break;
    case 3:
        printf("three");break;
    case 4:
        printf("four");break;
    case 5:
        printf("five");break;
    case 6:
        printf("six");break;
    case 7:
        printf("siven");break;
    case 8:
        printf("eight");break;
    case 9:
        printf("nine");break;
    }
}
}

