//btap: Viet phuong trinh tim so nguyen duong n lon nhat sao cho 1+2+...+n<=N.
//case 1: Input:8
//        Output:3
//giai thich:(6=1+2+3<=8<=1+2+3+4=10)
#include <stdio.h>
int main (){
	int n, sum, i;
	scanf ("%d", &n);
	sum=0;
	i=1;
	while (1){
		sum+=i;
		if (sum>n){
			printf ("%d", i-1);
			break;
		}
		++i;
	}
	return 0;
}
