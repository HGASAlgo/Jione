/***
sw expert 2070 큰놈, 작은놈, 같은 놈
2개의 수를 입력 받아 크기 비교
단순 비교 코드
***/

#include <stdio.h>

int main() {
		int test;
		int arr[100][2];

		scanf("%d", &test);
		for (int i = 0; i < test; i++){
				for(int j = 0; j < 2; j++){
						scanf("%d", &arr[i][j]);
				}
		}

		for (int i = 0; i < test; i++){
				if (arr[i][0] < arr[i][1])
						printf("#%d < \n", i + 1);
				else if (arr[i][0] == arr[i][1])
						printf("#%d = \n", i + 1);
				else
						printf("#%d > \n", i + 1);
		}
}
