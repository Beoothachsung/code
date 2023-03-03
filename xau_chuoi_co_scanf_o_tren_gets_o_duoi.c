#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int x;
	scanf ("%d", &x);
	getchar();//doc ki tu ban phim. Co the thay = scanf("\n");
	char a[10005], b[1000];//su dung getchar o day de doc va loai bo phim enter tu scanf o tren
	gets(a);
	gets(b);//truoc gets nay co gets khac o tren thi khong sao ca vi thang gets no khong de lai enter trong bo dem
	printf ("%s\n%s", a, b);// nen truoc gets(b) khong can getchar nua, neu ma getchar thi cai xau b se
}//mat di 1 ki tu.
