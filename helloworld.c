#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int func(int (*pF)(int, int), int a, int b)
{
    return pF(a, b);
}

int main()
{
    printf("%d\n", func(add, 10, 15));
    printf("%d\n", func(sub, 15, 10));
    printf("Hello World!");
    return 0;
}