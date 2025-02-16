#include<stdio.h>

int main() {
    int n, r1 = 0, r2 = 0;
    scanf("%d", &n);

    // Convert the number into its binary representation and reverse it in one step
    while (n) {
        int rem1 = n % 2;  // Extract the last binary digit
        r1 = r1 * 10 + rem1;  // Append it to the result
        n /= 2;  // Divide n by 2 to continue with the next bit
    }

    // Print the reversed binary digits
    printf("%d", r1);

    return 0;
}
