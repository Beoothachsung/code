//BTAP:nhap 1 chuoi co tu 5 den 50 ki tu
//1.dem 1 ki tu trong chuoi
//2.dem so ki tu la so trong chuoi
//3.dem so ki tu la in hoa hay in thuong trong chuoi
//4.thay the ki tu 'n'='N' in thuong thanh in hoa
//5.xoa cac ki tu la so trong chuoi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int demKT(char *s, char x){//x la ki tu con dem trong chuoi
	int i, dem=0;
	for (i=0;i<strlen(s); i++)
		if (s[i]==x) dem++;
	return dem;
}
int Demso(char *s){
	int i, dem=0;
	for (i=0; i<strlen(s); i++)
		if (s[i]>='0' && s[i]<='9') dem++;
	return dem;
}
int thayn(char *s){
	int i, dem = 0;
	for (i=0; i<strlen(s); i++)
		if (s[i]=='n'){
			s[i]='N';
			dem++;//if (s[i]>=48 && s[i]<=57) dem++;
		}
		puts(s);
		return dem;
}
int Xoaso(char *s)
{	
	int i, dem=0,k;
	for(i=0; i<strlen(s); i++)
		if (s[i]>='0' && s[i]<='9') 
		{
			dem++;
			for(k=i; k<strlen(s); k++)
				s[k]=s[k+1];
			i--; //phong TH co nhieu so lien nhau thi quay lai ktra phan tu vua dich chuyen 
		}
		puts(s);
	return dem;
}
int main (){
	char *s, kt;
	s = (char*) malloc(50);
	do{
		gets(s);//lay 1 chuoi toi khi ket thuc --co the nhieu hon 50 ki tu
	}while (strlen(s)<5 || strlen(s)>50);
	thayn(s);
	printf ("\nTrong chuoi co %d ki tu la ki tu so \n", Demso(s));
	printf ("\nxoa so trong chuoi:\n",Xoaso(s));
	puts(s);
	do{
		printf ("\nNhap 1 ki tu can dem, nhap 0 de ket thuc: ");
		fflush(stdin);//scanf ("%c", &kt);
		kt=getchar();
		printf ("\nSo ki tu %c trong chuoi la %d", kt, demKT(s, kt));
	}while(kt!='0');
}
