#include <stdio.h>

int main(){
		int test;
		int l, u, x;
		int result = -1;

		scanf("%d\n", &test);

		for(int i = 1; i <= test; i++){
				scanf("%d %d %d\n", &l, &u, &x);
				if(x <= l)
						result = l-x;
				else if (x >= l && x <= u)
                        result = 0;

				printf("#%d %d\n", i, result);
				result = -1;
		}
}
