#include<stdio.h>

int bunnyEars(int n)
{
    if(n < 0)
    {
        return -1;
    }

    if(n == 0)
    {
        return 0;
    }

    return 2 + bunnyEars(n - 1);
}

int fibo(int n)
{
    if(n == 0)
    {
        return 0;
    }

    if(n ==1 || n == 2)
    {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int posPow(int base, int exp)
{
    if(exp < 0)
    {
        return -1;
    }

    if(exp == 0)
    {
        return 1;
    }

    return base * posPow(base, exp - 1);
}


int numDigit(int n)
{
    if(n / 10 == 0)
    {
        return 1;
    }

    return 1 + numDigit(n / 10);
}


int main()
{
    int result = numDigit(213);

    printf("%d\n", result);

    return 0;
}