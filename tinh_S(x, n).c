//btap: tinh S(x, n)= x-x^2+x^3-...+(-1)^(n+1)*x^n.
//case 1: 8 2
//       -170
#include <stdio.h>
#include <math.h>
int main (){
	int n, x, S, i;
	scanf ("%d %d", &n, &x);
	S = 0;
	for (i=1; i<=n; i++){
		S+= pow((-1), i+1) * pow(x, i);
	}
	printf ("%d", S);
	return 0;
}
