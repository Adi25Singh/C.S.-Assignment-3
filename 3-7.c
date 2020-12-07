/*Q7) Program to print all Strong numbers between 1 and n.*/

#include<stdio.h>
void main()
{
printf("Program to print all Strong numbers between 1 and n.\n");
int i,t_n,num,sum=0,f,j;
long int n;
printf("\nEnter the number: ");
scanf("%ld",&n);
printf("Strong numbers between 1 and %ld are: ",n);
for(int i=1;i<=n;i++)
{
  t_n=i,sum=0;
  while(t_n!=0)
  {
  num=t_n%10;      //To obtain n digit by digit
  f=1;
  for(j=1;j<=num;j++)     //loop to calculate the factorial of digit obtained
   f*=j;
  sum+=f;
  t_n/=10;
  }
if(sum==i)             //Comparing sum with i to check whether it is strong or not.
printf("%d ",i);
}
getch();
}
