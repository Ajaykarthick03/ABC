#include<stdio.h>
long fact=1;
printf("Enter a number :");
scanf("%d",&n);
num=n;
if(n<0)
  printf("No factorial of negative number\n");
else
{
  while(n>1)
  {
    fact*=n;
    n--;
  }
  printf("Factorial of %d=%ld\n",num,fact);
}
}
