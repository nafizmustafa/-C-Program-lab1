#include <stdio.h>

int main() {
    int base, exp, result = 1, count = 1;

    printf("Enter the Base & Exponent values:\n");
    scanf("%d%d", &base, &exp);
    while(count <= exp)
     {
        result =result * base;
        count++;
     }// end while

    printf("\nResult: %d\n", result);
}
