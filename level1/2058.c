/**
sw expert 2058 자릿수 더하기
처음에 sum 0 으로 초기화해야함!!
**/

#include <stdio.h>

int main() {
		int num;
		int sum = 0;
		scanf("%d", &num);

		while (num > 0){
			sum += num % 10;
			num -= num % 10;
			num /= 10;
		}
		printf("%d\n", sum);
}
