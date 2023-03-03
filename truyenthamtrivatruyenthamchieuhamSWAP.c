#include <stdio.h>
#include <stdlib.h>
void swap (int *a, int *b){
	int temp = *a;//luu gia tri cua bien ma con tro a dang tro toi
	*a = *b;//gan gia tri cua bien ma con tro b dang tro toi cho gia tri cua bien ma con tro a dang tro toi
	*b = temp;//bien temp hoi nay luu dung de gan lai gia tri cho bien ma con tro b dang tro toi
}
int main (){
	int x = 1000, y = 2000;
	swap (&x, &y);
	printf ("%d %d", x, y);
	return 0;
}
