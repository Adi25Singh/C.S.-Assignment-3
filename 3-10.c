/*Q10 Program to input marks in 5 subjects and calculate the total Percentage and Grade.*/

#include<stdio.h>
void main()
{
int i,m[5],sum=0;
float perc;
printf("Program to input marks in 5 subjects and calculate the total Percentage and Grade.\n\n");
for(i=0;i<5;i++)   //Loop to input the marks in 5 subjects and store them in an array of 5 integers.
{
 printf("Enter marks in subject %d: ",i+1);
 scanf("%d",&m[i]);
 sum+=m[i];     //Calculating the sum of marks entered by the user.
}
perc=sum/5.0;   //Since percentage is calculated as (sum of n marks)/n
printf("\nPercentage is: %.2f%c", perc,37);
printf("\nGrade is: ");         //Assigning the grade according to the criteria given.
if(perc>=90)
 printf("A");
else if(perc>=80)
 printf("B");
else if(perc>=70)
 printf("C");
else if(perc>=60)
 printf("D");
else if(perc>=50)
 printf("E");
else if(perc>=40)
 printf("F");
getch();
}
