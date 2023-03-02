#include<stdio.h>

void main()
{
    int month, day;

    printf("Enter your month: ");
    scanf("%d", &month);

    printf("Enter day: ");
    scanf("%d", &day);

    int bday = ((((((month * 5) + 7) * 4) + 13) * 5) + day);

    printf("Your birthday is %d", bday);
}