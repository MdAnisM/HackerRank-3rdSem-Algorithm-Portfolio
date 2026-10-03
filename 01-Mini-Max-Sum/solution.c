#include <stdio.h>

int main() {
    long long arr[5];
    long long total = 0;
    long long min, max;

    for (int i = 0; i < 5; i++) {
        scanf("%lld", &arr[i]);
        total += arr[i];
    }

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    printf("%lld %lld\n", total - max, total - min);

    return 0;
}