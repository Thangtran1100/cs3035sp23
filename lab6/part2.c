#include <stdio.h>

int main()
{
    int ptrList[10];
    int size = sizeof(ptrList) / sizeof(int);
    int i = 0;

    while (i < size)
    {
        printf("Enter value of element %d: ", i + 1);
        scanf("%d", &ptrList[i]);
        i++;
    }

    int highest1 = ptrList[0];
    int highest2 = ptrList[0];

    for(int index = 0; index < size; index++)
    {
        if (ptrList[index] > highest1)
        {
            highest1 = ptrList[index];
        }
    }

    for (int index = 0; index < size; index++)
    {
        if (ptrList[index] > highest2 && ptrList[index] < highest1)
        {
            highest2 = ptrList[index];
        }
    }
 
    printf("The largest element is %d\n", highest1);
    printf("The second largest element is %d\n", highest2);

    return 0;
}