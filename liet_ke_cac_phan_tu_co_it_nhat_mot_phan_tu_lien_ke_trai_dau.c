//btap: cho mot mang 1 chieu cac so nguyen,
//Liet ke cac phan tu co it nhat mot phan tu lien ke trai dau voi no
#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int a[n];
	int i;
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n; i++){
		if (i==0 && a[0] * a[1] < 0)
			printf ("%d ", a[0]);
		else if (i==n-1 && a[n-1] * a[n-2] < 0)
			printf ("%d ", n-1);
		else if (a[i] * a[i-1] < 0 || a[i] * a[i+1] < 0)
			printf ("%d ", a[i]);
	}
}
