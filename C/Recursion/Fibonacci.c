#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int num;
    printf("Enter the position in the Fibonacci series: \n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Please enter a non-negative integer.\n");
    }
    else
    {
        printf("The value at position %d of the Fibonacci series is: %d\n", num, fibonacci(num));
    }
    return 0;
}