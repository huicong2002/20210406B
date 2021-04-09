#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int n;
int arr[100005], sum[100005];

int main() {
    int max = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
        sum[i] = sum[i - 1] + arr[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (sum[i] == sum[j]) {
                if (i - j > max) {
					max = i - j;
				}
                break;
            }
        }
    }

    printf("%d", max);

    return 0;
}
