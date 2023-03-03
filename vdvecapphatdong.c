#include <stdio.h>
#include <stdlib.h>
int main (){
	int *ptr = (int*) malloc (1000000 * sizeof (int ));
	int n = 5;
	int i;
	for (i=0; i<n; i++){
		scanf ("%d", &ptr[i]);
	}
	for (i=0; i<n; i++){
		printf ("%d ", ptr[i]);
	}
}
