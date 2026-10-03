#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int candles[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &candles[i]);
    }

    int max = candles[0];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (candles[i] > max) {
            max = candles[i];
            count = 1;
        }
        else if (candles[i] == max) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}