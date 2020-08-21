#include <iostream>
#include <stdio.h>

void odd_row(int n)
{
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) printf("*");
        else printf(" ");
    }
    printf("\n");
}

void even_row(int n)
{
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) printf("*");
        else printf(" ");
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        if (n == 1) {
            printf("*");
            break;
        }
        else {
            odd_row(n);
            even_row(n);
        }
    }

    return 0;
}
