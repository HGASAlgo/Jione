#include <stdio.h>
#include <math.h>

int main(){
		int n, a, b;
		double result = 0;

		for(int i = 1; i<=10; i++){
			scanf("%d\n", &n);
			scanf("%d %d\n", &a, &b);
		
			result = pow(a, b);

			printf("#%d %d\n", i, (int)result);
		}
}
