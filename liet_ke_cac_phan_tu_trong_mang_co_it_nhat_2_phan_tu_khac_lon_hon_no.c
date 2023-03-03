//Btap: Cho mang cac so nguyen khac nhau doi mot. liet ke cac phan tu trong mang co it nhat 2 phan tu khac lon hon no
#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int i;
	int a[n];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	int max1 = -1e9-1, max2 = -1e9-1;
	for (i=0; i<n; i++){
		if (a[i]>max1){
			max2 = max1;
			max1 = a[i];
		}
		else if (a[i]>max2){
			max2 = a[i];
		}
	}
	for (i=0; i<n; i++){
		if (a[i]<max2){
			printf ("%d ", a[i]);
		}
	}
}
