/***
sw expert 1945  간단한 소인수분해
N=2^a x 3^b x 5^c x 7^d x 11^e
a,b,c,d,e구하기
***/

#include <stdio.h>

int main() {
		int test;
		int arr[100];

		scanf("%d", &test);
		for (int i = 0; i < test; i++){
			scanf("%d", &arr[i]);
		}

		for (int i = 0; i < test; i++){
				int a = 0;
				int b = 0;
				int c = 0;
				int d = 0;
				int e = 0;

				while(arr[i] > 1){
						if(arr[i] % 11 == 0){
								e++;
								arr[i] /= 11;
						}
						if(arr[i] % 7 == 0){
								d++;
								arr[i] /= 7;
						}
						if(arr[i] % 5 == 0){
								c++;
								arr[i] /= 5;
						}
						if(arr[i] % 3 == 0){
								b++;
								arr[i] /= 3;
						}
						if(arr[i] % 2 == 0){
								a++;
								arr[i] /= 2;
						}
				}
				printf("#%d %d %d %d %d %d\n", i + 1, a, b, c, d, e);
		}
}
