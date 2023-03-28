#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int use(int *sum(int, int), int a, int b)
{
    return sum(a, b);
}

int main()
{
    printf("%d\n", use(sum, 10, 15));
    printf("Hello World!");
    return 0;
}