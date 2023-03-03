//vi du ve xau chuoi mang 2 chieu va day chi la cach de nhap thoi
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char a[100][100];
	int n, m;
	scanf ("%d%d", &n, &m);
	int i, j;
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			scanf ("%c", &a[n][m]);
		}
	}
}
