/*Q9) Program to print weekday.*/

#include<stdio.h>
void main()
{
printf("Program to print weekday.\n");
int d;
printf("\nEnter day number: ");
scanf("%d",&d);
printf("%d corresponds to : ",d);
switch(d)                 //Assuming the first day of the week to be Monday.
{
case 1: printf("Monday");
         break;
case 2: printf("Tuesday");
         break;
case 3: printf("Wednesday");
         break;
case 4: printf("Thursday");
         break;
case 5: printf("Friday");
         break;
case 6: printf("Saturday");
         break;
case 7: printf("Sunday");
         break;
default: printf ("Invalid Input");
          break;
}
getch();
}
