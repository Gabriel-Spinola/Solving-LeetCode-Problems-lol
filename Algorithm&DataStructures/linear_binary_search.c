#include <stdio.h>
#include <math.h>

/**
 * @return Returns the index position of the target if found, else returns -1
*/
int linear_search(int list[], int list_length, int target) {
  for (int i = 0; i < list_length; i++) {
    if (list[i] == target) return i;
  }

  return -1;
}

int binary_search(int list[], int list_length, int target) {
  int first = 0;
  int last = list_length - 1;

  while (first <= last) {
    int midpoint = round((first + last) / 2);

    if (list[midpoint] == target) return midpoint;

    if (list[midpoint] < target) {
      first = midpoint + 1;
    }
    else {
      last = midpoint - 1;
    }
  }

  return -1;
}

int main() {
  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int linear_result = linear_search(numbers, 10, 9);
  int linear_result2 = linear_search(numbers, 10, 12);

  printf("Linear Search:\n");
  printf("%d\n", linear_result != -1 ? linear_result : -1);
  printf("%d\n", linear_result2 != -1 ? linear_result2 : -1);

  int binary_result = binary_search(numbers, 10, 8);
  int binary_result2 = binary_search(numbers, 10, -2);

  printf("Binary Search:\n");
  printf("%d\n", binary_result != -1 ? binary_result : -1);
  printf("%d\n", binary_result2 != -1 ? binary_result2 : -1);

  return 0;
}