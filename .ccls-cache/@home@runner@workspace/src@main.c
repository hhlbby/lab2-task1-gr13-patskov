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


int main(void) { return 0; }