#include <stdio.h>

int main()
{
    int num;
    printf("Enter the position in the Fibonacci series: \n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    int a = 0, b = 1, next;

    if (num == 0)
    {
        printf("Fibonacci number: %d\n", a);
    }
    else if (num == 1)
    {
        printf("Fibonacci number: %d\n", b);
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Fibonacci number: %d\n", b);
    }

    return 0;
}