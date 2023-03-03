#include <stdio.h>

int fibonacci(int n) {
  if (n <= 0) return 0;
  if (n == 1) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n;
  printf("nhap mot vi tri: ");
  scanf("%d", &n);
  printf("Gia tri tai vi tri %d trong chuoi fibonacci: %d\n", n, fibonacci(n));
  return 0;
}

