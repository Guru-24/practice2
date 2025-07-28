#include <stdio.h>

int main() {
    long long num1, num2;
    long long quotient, remainder;
 printf("Enter first 8-digit number: ");
    scanf("%lld", &num1);

    printf("Enter second 8-digit number: ");
    scanf("%lld", &num2);
if (num1 < 10000000 || num1 > 99999999 || num2 < 10000000 || num2 > 99999999) {
        printf("Error: Both numbers must be 8-digit numbers.\n");
        return 1;
    }
if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }
 quotient = num1 / num2;
    remainder = num1 % num2;

    
        return 0;
}
@@@@@@@@@@
LINE ADDED1
