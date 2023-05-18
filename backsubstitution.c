#include <stdio.h>

void backsubFibo(int n) {
    int array[n];
    array[0] = 0;
    array[1] = 1;
    array[2] = 2;

    for (int i = 3; i < n; i++) {
        array[i] = array[i - 3] + array[i - 2];
    }

    printf("Fibonacci Sequence:");
    for (int i = n - 1; i >= 0; i--) {
        printf(" %d", array[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    backsubFibo(n);

    return 0;
}