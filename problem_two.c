#include <stdio.h>

int calculate_sum(int n)
{
    int m, last_digit;
    scanf("%d", &m);
    last_digit = m % 10;
    if (n == 1) {
        return;
    }
    return last_digit + calculate_sum(n - 1);
}

int main() 
{
    int n;
    scanf("%d", &n);
    printf("%d ", calculate_sum(n));
    
    return 0;
}
