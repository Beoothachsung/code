//btap: nhap 1 mang ky tu 5<=n<=20, sau do sap xep theo bang ascii roi in ra man hinh
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	char s[20], n, i, k;
	printf ("\nNhap so luong ki tu: ");
	do{
		scanf ("%d", &n);
	}while (n<5 || n>20);
	printf ("\nNhap vao %d ki tu:\n", n);
	for (i=0; i<n; i++){
		fflush(stdin);//ham nay la xoa bo dem ban phim de nhap ki tu tiep theo
		scanf ("%c", &s[i]);
		//sap xep
	}
	for (i=0; i<n-1; i++)
	for (k=i+1; k<n; k++)
		if (s[i]>s[k]){ //dung thu tu cua ki tu trong bang ma ascii
			char tam=s[i];
			s[i]=s[k];
			s[k]=tam;
		}
		//output ket qua 
		printf ("\nOUTPUT:\n");
		for (i=0; i<n; i++)
			printf ("%c", s[i]);
}
