/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main(){


float mark1,mark2,total,avg;
	
	//get input
	printf("Enter the  first subject mark : ");
	scanf("%2f",&mark1);
	
	printf("Enter the second subject mark : ");
	scanf("%2f",&mark2);
	
	//calculation
	total= (mark1+mark2);
	avg= total/2;
	
	 //output
	printf("Average is %2f",avg);
  return 0;
}

 


