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

int main(void) { return 0; }