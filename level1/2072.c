/***
sw expert 2072 홀수만 더하기
기본 입력방법과 % 연산을 통한 홀수 판별
C로 풀었는데,, C는 테스트 안 해줌,, 
***/

#include <stdio.h>

int main() {
		int test;
		int arr[100][10];

		scanf("%d", &test);
		for (int i = 0; i < test; i++){
				for(int j = 0; j < 10; j++){
						scanf("%d", &arr[i][j]);
				}
		}

		for (int i = 0; i < test; i++){
				int odd = 0;
				for(int j = 0; j < 10; j++){
						if(arr[i][j] % 2 != 0)
								odd += arr[i][j];
				}
				printf("#%d %d\n", i + 1, odd);
		}
}
