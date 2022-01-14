#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int arr[100];
    int t_size, in_size, n, k;
    long long int sum = 0;

    scanf("%d", &t_size);

    while (t_size--) {
        scanf("%d", &in_size);

        for (n = 0; n < in_size; n++) {
            scanf("%d", &arr[n]);
        }

        for (n = 0; n < in_size - 1; n++) {
            for (k = n + 1; k < in_size; k++) {
                sum += gcd(arr[n], arr[k]);
            }
        }

        printf("%lld\n", sum);

        sum = 0;
    }
    return 0;
}