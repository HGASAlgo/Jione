/***
sw expert 2068 최대수 구하기
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
				int max = arr[i][0];
				for(int j = 0; j < 10; j++){
					if(max < arr[i][j])
							max = arr[i][j];
				}
				printf("#%d %d\n", i + 1, max);
		}
}
