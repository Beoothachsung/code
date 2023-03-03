// Cac ham xu ly chuoi co ban.
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 //int is_lower (char c): Kiem tra 1 ki tu co phai la chu in thuong ha khong. Neu dung tra ve 1, sai tra ve 0.
int is_lower (char c){
	if (c>='a' && c<='z')
		return 1;
	return 0;
}
//int is_upper (char c): Kiem tra 1 ki tu co phai chu in hoa hay khong
int is_upper (char c){
	if (c>='A' && c<='Z')
		return 1;
	return 0;
}
//int is_alphar (char c): Kiem tra 1 ki tu co phai la chu cai hay khong
int is_alphar (char c){
	if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
		return 1;
	return 0;
}
//int is_digit (char c): Kiem tra 1 ki tu co phai la ki tu so hay khong
int is_digit (char c){
	if (c>='0' && c<='9')
		return 1;
	return 0;
}
//char to_lower (char c): Tra ve dang in thuong cua ki tu c
char to_lower (char c){
	if (c>='A' && c<='Z'){
		c+=32;
	}
	return c;
}
//char to_upper (char c): Tra ve dang in hoa cua ki tu c
char to_upper (char c){
	if (c>='a' && c<='z'){
		c-=32;
	}
	return c;
}
//int strlen (char c): Tra ve chieu dai xau
int strlen (char c[]){
	int cnt = 0;
	while (c[cnt] != '\0'){
		++cnt;
	}
	return cnt;
}
//char* strlwr (char c[]): Viet thuong tat ca cac ki tu trong xau
char* strlwr (char c[]){
	int i;
	for (i=0; i<strlen(c); i++){
		if (c[i]>='A' && c[i]<='Z'){
			c[i]+=32;
		}
	}
	return c;
}
//char* strupr (char c[]): Viet hoa tat ca cac ki tu trong xau
char* strupr (char c[]){
	int i;
	for (i=0; i<strlen(c); i++){
		if (c[i]>='a' && c[i]<='z'){
			c[i]-=32;
		}
	}
	return c;
}
//int strcmp (char a[], char b[]):So sanh 2 xau theo thu tu tu dien, neu a>b tra ve 1, a=b tra ve 0, 
//a<b tra ve -1
int min (int a, int b){
	return a<b?a:b;
}
int strcmp (char c[], char d[]){
	int n1=strlen(c);
	int n2=strlen(c);
	int i;
	for (i=0; i<min(n1, n2), i++){
		if (c[i] != d[i]){
			if (c[i] > d[i]) return 1;
			else return -1;
		}
	}
	if (n1==n2)
		return 0;
	else if (n1<n2) return -1;
	else return 1;
}
//int strcmpi(char a[], char b[]): So sanh 2 xau a va b theo thu tu tu dien khong phan biet in hoa, in
//thuong, neu a>b tra ve 1, a=b tra ve 0, a<b tra ve -1
int strcmpi(char c[], char d[]){
	int n1=strlen(c);
	int n2=strlen(d);
	strlwr(c);
	strlwr(d);
	int i;
	for (i=0; i<min(n1, n2), i++){
		if (c[i] != d[i]){
			if (c[i] > d[i]) return 1;
			else return -1;
		}
	}
	if (n1==n2)
		return 0;
	else if (n1<n2) return -1;
	else return 1;
}
//long long atoll (char c[]): Chuyen 1 xau ki tu so thanh so nguyen long long
long long atoll (char c[]){
	long long res = 0;
	int i;
	for (i=0; i<strlen(c); i++){
		res = res * 10 + c[i] - '0';
	}
	return res;
}
//char* strrev (char c[]): Viet ham dao nguoc 1 xau
char* strrev (char c[]){
	int l=0, r=strlen(c)-1;
	while (l<r){
		char tmp =c[l];
		c[l] = c[r];
		c[r] = tmp;
		++l;
		--r;
	}
	return c;
}
int main (){
	char c[100], d[100];
	gets(c);
	printf ("%s", strrev(c));
}
