/*Q5) Program to find Prime factors of a number.*/

#include<stdio.h>
void main()
{
int i,n,f,j;
printf("Program to find Prime factors of a number.\n");
printf("\nEnter the number: ");
scanf("%d",&n);
printf("Prime factors of %d : ", n);
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)         //Loop to calculate the factors of n
    {
      f=1;
      for(j=2;j<=i/2;j++)     //Loop to check whether the factor is prime or not
      {
      if(i%j==0)
      f=0;
      }
    if(f==1)
    printf("%d ",i);
    }
  }
getch();
}
