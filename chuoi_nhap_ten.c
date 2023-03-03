//btap: chuoi nhap ten, xoa dau cach ben trai, ben phai va o giua, chuyen in thuong thanh in hoa
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void LeftTrim(char s[]){
	int i=0, k;
	while(s[i]== ' ')i++; //strcpy(&s[0], &s[i]
	for(k=0; k<strlen(s)-i; k++)
		s[k]=s[k+i];
	s[strlen(s)-i]='\0';//day ky tu ket thuc chuoi sang trai i vi tri 
	puts;
}
void RightTrim(char s[]){
	int i=strlen(s);//phan tu strlen la phan tu \0
	while (s[i-1]==' ') i--;
	s[i]='\0';
	puts(s);
}
void Trim(char s[]){
	int i, k;
	for (i=0; i<strlen(s); i++)
		if (s[i]==' '&& s[i+1]==' '){
			for (k=i; k<strlen(s); k++)
				s[k]=s[k+1];
			i--;//giam i phong truong hop nhieu hon 2 dau cach lien nhau
		}
		puts(s);
}
void Inhoa(char s[]){
	int i;
	for (i=0; i<strlen(s); i++)
		if (s[i]>=65 && s[i]<=90) s[i]=s[i]+32;
	for (i=0; i<strlen(s); i++)
		if (s[i]==' ') s[i+1]=s[i+1]-32;
	s[0]=s[0]-32;
	puts(s);
}
int main(){
	char s[30];
	printf ("\nInput your Name: ");
	gets(s);
	LeftTrim(s);
	RightTrim(s);
	Trim(s);
	Inhoa(s);
}
