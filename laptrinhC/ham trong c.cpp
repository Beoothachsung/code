#include <stdio.h>
#include <stdio.h>
// Tinh tong S(n)= 1 + 1/2 + 1/3 + ... + 1/n (voi phan so neu khong dung kieu double thi se ra ket qua sai)
double S(int n){
	double res=0;
	for (int i=1; i<=n; i++) res+=(double) 1/i;
	return res;
}
int main (){
	int n=10;
	double res = S(n);
	printf ("%.2lf\n", res);
	return 0;
}
