// kiem tra mot so nguyen khong am co phai so chinh phuong hay khong, neu co in YES, nguoc lai in NO
#include <stdio.h>
#include <math.h>
void chinhphuong (int n){
	int can = sqrt(n);
	if(can * can == n) printf ("YES\n");
	else printf ("NO\n");
}
int main (){
	int n = 16;
	chinhphuong(n);
	return 0;
}
