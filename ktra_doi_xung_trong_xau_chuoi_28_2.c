//btap tren lop: kiem tra doi xung trong xau chuoi
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int Ktdoixung(char a[]){
	int i=0, j=strlen(a)-1,status=1;
	while(i<=j){
		if(a[i]==a[j]){
			i++;
			j--;
		}
		else{
			status=0; break;
		}
	}
	return(status);
}
int main(){
	char s[50], sl[50];
	do{
		fflush(stdin);
		printf("\nNhap 1 chuoi 5-50 ky tu: ");
		scanf ("%50[^\n]s", s);
	}while (strlen(s)<5 || strlen(s)>50);
	if (Ktdoixung(s)==1) printf ("\nChuoi '%s' la doi xung", s);
	else printf ("\nChuoi '%s' khong doi xung", s);
}
