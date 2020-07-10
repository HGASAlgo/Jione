// 1284. 수도요금경쟁
// 두 수도 회사 중에 요금이 더 저렴한 곳 선택
// 요금 출력
// input  p, q, r, s, w 

#include <stdio.h>

int main()
{
		int test;
		scanf("%d", &test);
		// fflush(stdin);

		for(int i = 1; i <= test; i++){
				int p, q, r, s, w;
				int company1 = 0, company2 = 0;
				scanf("%d %d %d %d %d", &p, &q, &r, &s, &w);
				// fflush(stdin);

				company1 = p * w;

				if (r >= w)
						company2 = q;
				else
						company2 = q + (w-r)*s;

				printf("#%d %d\n", i, (company1 < company2)?company1:company2);
		}
}
