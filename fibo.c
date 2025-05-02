#include <stdio.h>

void printFibonacci(int n) {
    long long first = 0, second = 1;
    if (n >= 1) {
        printf("%lld ", first);
    }
    if (n >= 2) {
        printf("%lld ", second);
    }
    for (int i = 2; i < n; i++) {
        long long next = first + second;
        printf("%lld ", next);
        first = second;
        second = next;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printFibonacci(n);
    return 0;
}
