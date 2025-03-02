#include <stdio.h>
#include <math.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

void binom_acilimi(int n) {
    for (int k = 0; k <= n; k++) {
        int kombinasyon = factorial(n) / (factorial(k) * factorial(n - k));
        if (k > 0) {
            printf(" + ");
        }
        printf("%d * a^%d * b^%d", kombinasyon, n - k, k);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Üs Giriniz = ");
    scanf("%d", &n);
    binom_acilimi(n);
    return 0;
}
