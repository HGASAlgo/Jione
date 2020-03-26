/***
sw expert 2063 중간값 찾기
sort필요
java는 sort라이브러리 제공해주는데,,, 
java로 갈아탈까 고민이 되는 문제
제약사항: n은 항상 홀수이다.
***/

#include <stdio.h>
#include <stdlib.h>

int static compare (const void*first, const void* second)
{
		return (*(int*)first - *(int*)second);
}

int main() {
		int n;
		int arr[199];
		scanf("%d", &n);

		for (int i = 0; i < n; i++){
				scanf("%d", &arr[i]);
		}

		qsort(arr, n, sizeof(int), compare);
		printf("%d\n", arr[n/2]);
}
