// #include <stdio.h>

// int fibonacci(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter the position in the Fibonacci series: \n");
//     scanf("%d", &num);

//     if (num < 0)
//     {
//         printf("Please enter a non-negative integer.\n");
//     }
//     else
//     {
//         printf("The value at position %d of the Fibonacci series is: %d\n", num, fibonacci(num));
//     }
//     return 0;
// }

// Iterative Method Using For Loop
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
