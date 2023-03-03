// cac so chia het cho 3
#include <stdio.h>
#include <math.h>
int main (){
	int i;
	int n; scanf("%d", &n);
	for (i=0; i<=n; i++){
		if (i%3==0){
			printf("%d\n", i);
		}
	}
	return 0;
}

