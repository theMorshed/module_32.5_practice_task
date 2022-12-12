#include <stdio.h>

int sum_natural_num(int n)
{
    if (n == 1) {
        return 1;
    }
    return n + sum_natural_num(n - 1);
}

int main() 
{
    int n, result;
    scanf("%d", &n);
    result += sum_natural_num(n);
    printf("%d\n", result);

    return 0;
}