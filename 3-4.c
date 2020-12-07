/*Q4) Program to find LCM of two numbers.*/

#include<stdio.h>
void main()
{
printf("Program to find LCM of two numbers.\n");
int i,n1,n2,n,hcf,lcm;
  printf("\nEnter the first number: ");
  scanf("%d",&n1);
  printf("Enter the second number: ");
  scanf("%d",&n2);
  n=(n1<n2)?n1:n2;
  for(i=1;i<=n;i++)
  {
  if(n1%i==0 && n2%i==0)
  hcf=i;

  }
  printf("The LCM of %d and %d is: %d",n1,n2,(n1*n2)/hcf);      //The mathematical formula for calculation of lcm is (number 1 * number 2)/ HCF
getch();
}
