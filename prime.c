#include<stdio.h>
int prime(int,int);
void main()
{
  int n,p;
  printf("Enter any number\n");
  scanf("%d",&n);
  p=prime(n,n/2);
  if(p==1)
    printf("The given number is prime/n");
  else
    printf("NOT prime/n");
}
int prime(int n,int i)
{
  if(i==1)
    return 1;
  if(n%2==0)
    return 0;
  return prime(n,i-1);
}
