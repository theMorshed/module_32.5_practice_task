#include <stdio.h>

int print_to_one(int m, int n)
{
    if (m == n) {
        return 0;
    }
    print_to_one(m, n - 1);
    printf("%d ", n);
}

int main() 
{
    int n;
    scanf("%d", &n);
    print_to_one(0, n);
    
    return 0;
}