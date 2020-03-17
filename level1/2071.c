/***
sw expert 2071 평군값 구하기
이 문제는 10개의 수를 입력 받아, 평균값을 출력하는 프로그램
단, 소수점 첫째 자리에서 반올림해야한다!
C는 테스트는 c++로 하면 되는거였군,, 
***/

#include <stdio.h>

int main() {
		int test;
		int arr[100][10] = {{}};

		scanf("%d", &test);
		for (int i = 0; i < test; i++){
				for(int j = 0; j < 10; j++){
						scanf("%d", &arr[i][j]);
				}
		}

		for (int i = 0; i < test; i++){
				int sum = 0;
				float avg = 0.0;
				for(int j = 0; j < 10; j++){
					sum += arr[i][j];
				}
				avg = (float)sum / 10.0;
				
				printf("#%d %0.f\n", i + 1, avg);
		}
}
