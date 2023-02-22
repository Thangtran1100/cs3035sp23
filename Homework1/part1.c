#include<stdio.h>
#include<stdlib.h>

/*
    yearsBetween() function will calculate and always return 
    a positive result using absolute function in stdlib.h library 
    when we subtract two values, skip the comparison step between values
*/ 

int yearsBetween(int num1, int num2)
{
    return abs(num1 - num2);
}


int main()
{
    // Declare variables
    int year1, year2;

    // Inform user to enter values
    printf("Enter the year you want to check: ");
    scanf("%d %d", &year1, &year2);

    // Print out the difference between year1 and year2
    printf("Difference between years is %d\n", yearsBetween(year1, year2));

    return 0;
}