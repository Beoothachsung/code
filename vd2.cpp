#include <stdio.h>
int main(){
	short a[16];
	int i, n;
	do{
		printf("Moi ngai tuan du nhap mot so lon hon 10: ");
		scanf("%d", &n);
	}while (n<=10);
	i = 0;
    while (n > 0) {
    a[i] = n % 2;
    n = n / 2;
    i++;
    }
    for (i = 15; i >= 0; i--) {
    printf("%d ", a[i]);
    }
    return 0;
}
