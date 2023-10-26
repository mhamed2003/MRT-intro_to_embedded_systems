#include<stdio.h>
void main(){

int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<50)
    {
        printf("Grade F");
    }
    else if(marks>=50 && marks<65)
    {
        printf("pass");
    }
    else if(marks>=65 && marks<80)
    {
        printf("good");
    }
    else if(marks>=80 && marks<90)
    {
        printf("very good");
    }
    else
    {
        printf("excellent");
    }

}
