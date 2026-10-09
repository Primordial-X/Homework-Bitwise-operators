#include <stdio.h>


//15 Questions of logical and bitwise operators.
/*
//Q1
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number (0-15): ");
    scanf("%d", &num);

    if (num < 0 || num > 15) {
        printf("Invalid input! Enter a number between 0 and 15.\n");
        return 0;
    }

    count = (num & 1)
          + ((num >> 1) & 1)
          + ((num >> 2) & 1)
          + ((num >> 3) & 1);

    printf("Number of 1 bits = %d\n", count);

    return 0;
}

*/

/*
//Q2
#include <stdio.h>

int main() {
    unsigned char num;
    int count;

    printf("Enter an 8-bit integer (0-255): ");
    scanf("%hhu", &num);

    count = (num & 1)
          + ((num >> 1) & 1)
          + ((num >> 2) & 1)
          + ((num >> 3) & 1)
          + ((num >> 4) & 1)
          + ((num >> 5) & 1)
          + ((num >> 6) & 1)
          + ((num >> 7) & 1);

    printf("Number of 1 bits = %d\n", count);

    return 0;
}
*/

/*
//Q3
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1)
        printf("%d is Odd.\n", num);
    else
        printf("%d is Even.\n", num);

    return 0;
}
*/

/*
//Q4
#include <stdio.h>

int main() {
    int num, n;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter bit position (0-31): ");
    scanf("%d", &n);

    if (num & (1 << n))
        printf("The %dth bit is 1.\n", n);
    else
        printf("The %dth bit is 0.\n", n);

    return 0;
}
*/

/*
//Q5
#include <stdio.h>

int main() {
    int num, n;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter bit position (0-31): ");
    scanf("%d", &n);

    num = num | (1 << n);

    printf("Number after setting %dth bit = %d\n", n, num);

    return 0;
}
*/

/*
//Q6
#include <stdio.h>

int main() {
    int num, n;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter bit position (0-31): ");
    scanf("%d", &n);

    num = num & ~(1 << n);

    printf("Number after clearing %dth bit = %d\n", n, num);

    return 0;
}
*/

/*
//Q7
#include <stdio.h>

int main() {
    int num, n;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter bit position (0-31): ");
    scanf("%d", &n);

    num = num ^ (1 << n);

    printf("Number after toggling %dth bit = %d\n", n, num);

    return 0;
}
*/


/*
//Q8
#include <stdio.h>

int main() {
    int num, last4;

    printf("Enter an integer: ");
    scanf("%d", &num);

    last4 = num & 15;   // Extract last 4 bits

    printf("Decimal value of last 4 bits = %d\n", last4);

    return 0;
}
*/

/*
//Q9
#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num > 0 && (num & (num - 1)) == 0)
        printf("%d is a power of 2.\n", num);
    else
        printf("%d is not a power of 2.\n", num);

    return 0;
}
*/

/*
//Q10
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
*/

/*
//Q11
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if ((a ^ b) < 0)
        printf("The two numbers have different signs.\n");
    else
        printf("The two numbers have the same sign.\n");

    return 0;
}
*/

/*
//Q12
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if ((num & (1 << 4)) && (num & (1 << 5)))
        printf("Both 4th and 5th bits are set.\n");
    else
        printf("Both 4th and 5th bits are not set.\n");

    return 0;
}
*/

/*
//Q13
#include <stdio.h>

int main() {
    int num, rev;

    printf("Enter a number (0-15): ");
    scanf("%d", &num);

    if (num < 0 || num > 15) {
        printf("Invalid input!\n");
        return 0;
    }

    rev = ((num & 1) << 3) |
          ((num & 2) << 1) |
          ((num & 4) >> 1) |
          ((num & 8) >> 3);

    printf("Reversed 4-bit value = %d\n", rev);

    return 0;
}
*/

/*
//Q14
#include <stdio.h>

int main() {
    unsigned char num;
    int count;

    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    count = (num & 1)
          + ((num >> 2) & 1)
          + ((num >> 4) & 1)
          + ((num >> 6) & 1);

    printf("Number of set bits at positions 0, 2, 4 and 6 = %d\n", count);

    return 0;
}
*/

/*
//Q15
#include <stdio.h>

int main() {
    unsigned char num, result;

    printf("Enter an 8-bit integer (0-255): ");
    scanf("%hhu", &num);

    // Swap upper 4 bits and lower 4 bits
    result = (num >> 4) | (num << 4);

    printf("Original number : %u\n", num);
    printf("After swapping  : %u\n", result);

    return 0;
}
*/
