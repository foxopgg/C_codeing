#include <stdio.h>

int main() {
      int N, i;
      int positiveSum = 0, negativeSum = 0, totalSum = 0;
      scanf("%d", &N);
      int arr[N];
      for (i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
      }
      for (i = 0; i < N; i++) {
      if (arr[i] > 0) {
            positiveSum += arr[i];
      } else if (arr[i] < 0) {
            negativeSum += arr[i];
      }
            totalSum += arr[i];
      }
      printf("%d\n", positiveSum);
      printf("%d\n", negativeSum);
      printf("%d\n", totalSum);
return 0;
}
