#include <stdio.h>
int checkday (int d, int m, int y){
	int max = 31;
	if (m==4 || m==6 || m==9 || m==11) max = 30;
	if (m==2){
		if (y%400==0 || (y%4==0 && y%100!=0)) max =29;
		else max = 28;
	}
	if (m>0 && m<=12 && d>0 && d<=max) return (1);
	else return (0);
}
int main (){
	int d, m, y; scanf("%d %d %d", d, m ,y);
	if (checkday (d,m,y)==1) printf ("valid");
	else printf ("invalid");	
}
