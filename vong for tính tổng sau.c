//nhap vao gia tri cua n nguyen duong, tinh tong sau va in ket qua ra man hinh, S=1+2+3+...+n
#include <stdio.h>
#include <math.h>
int main (){
	int i;
	int n;
	scanf("%d", &n);
	int sum=0;
	for (i=1; i<=n; i++){
		sum+=i;
		printf("%d\n", sum);
	}
	return 0;
}

