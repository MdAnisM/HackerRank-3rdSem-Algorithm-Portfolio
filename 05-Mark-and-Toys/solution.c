#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int prices[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    sort(prices, n);

    int count = 0;
    int total = 0;

    for (int i = 0; i < n; i++) {
        if (total + prices[i] <= k) {
            total += prices[i];
            count++;
        }
        else {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}