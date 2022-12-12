#include <stdio.h>

int calculate_power(int n, int m);

int main() 
{
    int n, m, result = 1;
    scanf("%d %d", &n, &m);
    result *= calculate_power(n, m);
    printf("%d\n", result);
    
    return 0;
}

int calculate_power(int n, int m) 
{
    if (m == 0) {
        return 1;
    }
    return n * calculate_power(n, m - 1);
}