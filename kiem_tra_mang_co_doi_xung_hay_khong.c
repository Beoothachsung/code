//btap: Kiem tra xem mang co doi xung hay khong, neu co in YES, nguoc lai in NO.
#include <stdio.h>
int dx (int a[], int n){
	int l=0, r=n-1;
	while (l<r){
		if (a[l]!=a[r])
			return 0;
		++l;
		--r;
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
	if (dx(a, n))
		printf ("YES");
	else printf ("NO");
}
