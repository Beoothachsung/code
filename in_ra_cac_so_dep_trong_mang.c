//btap: Mot so duoc dinh nghia la so dep neu co chua ca chu so 1 va chu so 9.In ra cac so dep trong mang.
//Neu mang khong ton tai so dep thi in ra -1.
#include <stdio.h>
int check(int n){
	int c1=0, c9=0;
	while (n){
		int r = n%10;
		if(r == 1) c1=1;
		if(r == 9) c9=1;
		n/=10;
	}
	return c1&&c9;
}
int main (){
	int n;
	scanf ("%d", &n);
	int i;
	int a[n];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	int ok=0;//check xem co so dep hay khong
	for (i=0; i<n; i++){
		if (check(a[i])){
			printf ("%d", a[i]);
			ok = 1;//da tim thay so dep
		}
	}
	if (!ok) printf ("-1");
}
