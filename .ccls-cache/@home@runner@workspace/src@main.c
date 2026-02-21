/* main.c */
#include <stdio.h>
#include <stdlib.h>
#define N 23
void sort_desc(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] < a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}
int third_highest(int a[], int n) {
  sort_desc(a, n);
  return a[2];
}
int whoIsHigher(int a[], int b[], int n) {
  int a_third = third_highest(a, n);
  int b_third = third_highest(b, n);
  if (a_third > b_third)
    return 1;
  else
    return 2;
}

int main(void) {
  int class1[N], class2[N];
  for (int i = 0; i < N; i++) {
    class1[i] = rand() % 61 + 150;
    class2[i] = rand() % 61 + 150;
  }
  printf("Class 1: ");
  for (int i = 0; i < N; i++) {
    printf("%d ", class1[i]);
  }
  printf("\n");
  printf("Class 2: ");
  for (int i = 0; i < N; i++) {
    printf("%d ", class2[i]);
  }
  int winner = whoIsHigher(class1, class2, N);
  printf("\n");
  printf("The winner is class %d\n", winner);
}