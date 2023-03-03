#include <stdio.h>
#include <math.h>

int is_prime(int n) {
  int i;
  if (n <= 1) return 0;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main() {
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  if (n < 100000 || n > 1000000) {
    printf("n khong thoa man 100000 < n < 1000000\n");
    return 0;
  }
  printf("n %s la so nguyen to\n", is_prime(n) ? "co" : "khong");
  printf("%d trieu %d tram %d nghin %d dong\n", n / 1000000, (n / 100000) % 10, (n / 1000) % 100, n % 1000);
  return 0;
}

