/*Q6) Program to check whether a number is Strong number or not.*/

#include<stdio.h>
void main()
{
printf("Program to check whether a number is Strong number or not.\n");
int i,n,t_n,num,sum=0,f;
  printf("\nEnter the number: ");
  scanf("%d",&n);
  t_n=n;
  while(t_n!=0)
  {
  num=t_n%10;        //To obtain n digit by digit
  f=1;
  for(i=1;i<=num;i++)  //loop to calculate the factorial of digit obtained
   f*=i;
   sum+=f;
  t_n/=10;            //To remove the digit whose loop is already calculated and proceed with further digits.
  }
if(sum==n)     //Comparing sum obtained after adding factorials of digits with the original number entered.
printf("%d is a strong number.",n);
else
printf("%d is not a strong number.",n);
getch();
}
