#include<stdio.h>

int a = 2;
int b = 3;

//const int a = 2;
//const int b = 3;

float whatPercentage()
{
    return ( (float) a/b) * 100;
}


void main()
{
    float result1 = whatPercentage();
    printf("%f\n", result1);

    a = 4;
    b = 8;

    
    float result2 = whatPercentage();
    printf("%f\n", result2);

    /* Question 4
     * The percentage calculated changes because the values of a and b have been changed.
     * This behavior is attributed to the fact that the function whatPercentage() uses the 
     * global variables a and b, and any changes to those variables will affect the calculation 
     * of the percentage.
     */

    /* Question 5
     * When we add the keyword const will result in a compiler error because a and b are 
     * now a constant variables and its value cannot be changed
    */
}