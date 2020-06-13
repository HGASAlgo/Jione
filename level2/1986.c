/***
sw expert 1986 지그재그 숫자 
혹수는 더하고 짝수는 빼는 누적 값
***/

#include <stdio.h>

int main() {
		int test;
		int num;
		int result = 0;

		scanf("%d", &test);
		for (int i = 0; i < test; i++){
				scanf("%d", &num);
				for(int j = 1; j <= num; j++){
						if(j % 2 == 0)
							result -= j;
						else
							result += j;
				}
				printf("#%d %d\n", i+1, result);
				result = 0;
		}
}
