//btap: mang tang
//Kiem tra xem mang cho truoc cotang dan hay khong, mang tang dan duoc dinh nghia la mang co phan tu
//dung sau lon hon phan tu dung truoc no . Neu mang tang dan in ra YES, truong hop nguoc lai in ra NO.
#include <stdio.h>
int check(int a[], int n){
	int i;
	for (i=0; i<n-1; i++){
		if(a[i]>=a[i+1])
			return 0;
	}
	return 1;
}
int main (){
	int n;
	scanf ("%d", &n);
	int i;
	int a[n];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	if (check(a,n))
		printf ("YES\n");
	else printf ("NO");
}
