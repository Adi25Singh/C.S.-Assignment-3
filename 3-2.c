/*Q2) Program to find all the factors of a number.*/

#include<stdio.h>
void main()
{
printf("Program to find all the factors of a number.\n");
int i,n;
  printf("\nEnter the number: ");
  scanf("%d",&n);
  printf("factors of %d are: ",n);
  for(i=1;i<=n;i++)      //any number that leaves remainder 0 on division by n is a factor of n, so a loop to calculate the factors of n
  {
  if(n%i==0)
  printf("%d ", i);

  }
getch();
}
