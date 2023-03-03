//bai tap dem so chan, le
#include <stdio.h>
int main (){
	int n;
	printf ("Moi ngai tuan du nhap so luong phan tu: ");
	scanf ("%d", &n);
	int i, a[n];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	int chan=0, le=0;
	for (i=0; i<n; i++){
		if (a[i]%2==0){
			++chan;
		}else ++le;
	}
	printf ("%d %d", chan, le);
}
