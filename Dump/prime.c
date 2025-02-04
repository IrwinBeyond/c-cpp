#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;
    printf("Enter the number of prime numbers to output: ");
    scanf("%d", &n);

    while (count < n) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
