/*Q8) Program to convert Hexadecimal to Decimal Number System.*/

#include<stdio.h>
#include<math.h>
void main()
{
printf("Program to convert Hexadecimal to Decimal Number System.\n");
int i,n=0,p=1;
long int val=0;
char hex[20];
printf("\nEnter hexadecimal number: ");
scanf("%s",hex);
while(hex[n])  //Loop to calculate the length of hex
   n++;
n--;  //Since to calculate power while conversion the power goes from 0 to n-1, where n is the length of a number. for ex: (23) base 16 would go= 2*16^1+3*16^0 = 35
for(i=0;hex[i]!='\0';i++)
{
  if(hex[i]>= 'a' && hex[i]<='f')
  {
  p=hex[i]-87;     //Since a to f has the value 10-15, and the decimal equivalent is obtained on subtraction of ascii value by 87, i.e 'a' is 97 which will give 97-87=10, and 'b' is 98, so 98-87=11 and so on
  }
  if(hex[i]>= 'A' && hex[i]<='F')
  {
  p=hex[i]-55;   //Similarly the ascii value of uppercase letters can be calculated by subtraction with 55
  }
  if(hex[i]>='0' && hex[i]<='9')
  {
  p=hex[i]-48;    //The ascii value of numbers(0-9) are from 48-57, so their decimal equivalent can be calculated by subtraction of character's ascii value from with 48.
  }
  val+=p*pow(16,n); //The digits thus obtained are multiplied with powers of 16 from 0 to length of hexadecimal number-1 to obtain the decimal equivalent.
  n--;
}
printf("%s in Decimal= %ld",hex, val);
getch();
}
