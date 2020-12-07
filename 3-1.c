/*Q1) Program to find power of a number using for loop*/

#include<stdio.h>
void main()
{
int i,p,n;
long pow_n=1;
  printf("Program to find power of a number using for loop.\n");
  printf("\nEnter the number: ");
  scanf("%d",&n);
  printf("Input the power: ");
  scanf("%d",&p);
  for(i=1;i<=p;i++) //loop to multiply n p times, i.e n^p.
  {
  pow_n*=n;
  }
  printf("\n%d ^ %d = %ld",n,p,pow_n);
getch();
}
