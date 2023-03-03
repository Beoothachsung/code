#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[50],s1[50]="Truong Dai ",s2[50]="Hoc FPT ",s3[10]="Hoc ",s4[10]="Hoc Tot ";
	char *p,*tam;
	tam=malloc(50);
	strcpy(s,s1);
	puts(s);
	printf("\nSo sanh chuoi'%s'va chuoi '%s'= %d\n",s,s1,strcmp(s,s1));
	printf("\nSo sanh chuoi'%s'va chuoi '%s'= %d\n",s1,s2,strcmp(s1,s2));
	strcat(s,s2);
	puts(s);
	p=strstr(s,s3);
	if(p!=NULL){
		strcpy(tam,p+strlen(s3));
		*p='\0';  //gia tri o nho p=\0 thi chuoi se ket thuc o day
		strcat(s,s4);
		strcat(s,tam);
		
	}puts(s);
	
}
