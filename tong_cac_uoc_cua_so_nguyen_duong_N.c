//btap:tinh tong cac uoc so cua so nguyen duong N (N>0)
#include <stdio.h>
int main (){
	int n, sum, i;
	scanf ("%d", &n);
	sum=n+1;//vi uoc cua no bao gom chinh no va so 1 nên +1
	for (i=2; i<n; i++){
		if (n%i==0)
			sum+=i;
	}
	printf ("%d", sum);
	return 0;
}
