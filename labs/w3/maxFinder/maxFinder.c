#include "stdio.h"

#define TOTAL_NUMBER 10

int findMax(int arr[]);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int max = findMax(arr);

    // print out array
    for (int i = 0; i < TOTAL_NUMBER; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Max: %d\n", max);

    return 0;
}

int findMax(int arr[]) {
  int max = arr[0];
  for (int i = 1; i < TOTAL_NUMBER; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}
