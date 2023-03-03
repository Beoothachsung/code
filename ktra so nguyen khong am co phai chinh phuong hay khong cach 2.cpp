#include <stdio.h>
#include <math.h>
int chinhphuong(int n){
	int can = sqrt (n);
	if (can * can == n) return 1;
	else return 0;
}
int main (){
	int n = 16;
	if (chinhphuong(n)==1) printf ("YES\n");
	else printf ("NO\n");
	return 0;
}
