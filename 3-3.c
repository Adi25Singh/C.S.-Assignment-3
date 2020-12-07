/*Q3) Program to find HCF of two numbers.*/

#include<stdio.h>
void main()
{
int i,n1,n2,n,hcf;
printf("Program to find HCF of two numbers.\n");
  printf("\nEnter the first number: ");
  scanf("%d",&n1);
  printf("Enter the second number: ");
  scanf("%d",&n2);
  n=(n1<n2)?n1:n2;      //To find the smallest of the both numbers
  for(i=1;i<=n;i++)
  {
  if(n1%i==0 && n2%i==0)       //Since the greatest number leaving remainder 0 on division by both n1 and n2 is said to be their hcf
  hcf=i;
   }
  printf("The HCF of %d and %d is: %d",n1,n2,hcf);
getch();
}
