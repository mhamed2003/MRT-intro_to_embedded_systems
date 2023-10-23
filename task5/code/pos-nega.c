#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;
  printf("enter your number:");
  scanf("%d",&number);
  if(number ==0)
      printf("the number is zero");
      else if(number >0)
        printf("the number is positive");
      else
        printf("the number is nigative");

    return 0;
}
