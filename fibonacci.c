#include <stdio.h>

void fiboSeries(int n) {
    int f0 = 0, f1 = 1, f2 = 2, fnext;

    printf("Fibonacci series up to %d:\n", n);
    printf("%d, %d, ", f0, f1);

    for (int i = 2; f2 <= n-3; i++) {
        printf("%d, ", f2);
        fnext = f0 + f1;
        f0 = f1;
        f1 = f2;
        f2 = fnext;
    }

    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    fiboSeries(n);

    return 0;
}
