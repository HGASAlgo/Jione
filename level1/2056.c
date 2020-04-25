/**
sw expert 2056 연원일 달력
8자리의 날짜가 주어지면 날짜 유효성 판단
윤년은 고려하지 않는다.
이 문제는 level 1이 아닌 것 같다..
string으로 처리하면 프린트하기 더 쉬우려나??
**/

#include <stdio.h>

int main() {
		int test;
		int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		scanf("%d", &test);

		for (int i = 0; i < test; i++){
			int year;
			int month;
			int day;

			scanf("%4d", &year);
			scanf("%2d", &month);
			scanf("%2d", &day);

			if (1 <= month && 12 >= month){
					if(1 <= day && days[month] >= day){
							if(year < 1000){
								if (month < 10){
										if (day < 10){
												printf("#%d 0%d/0%d/0%d\n", (i+1), year, month, day);
										}else{
												printf("#%d 0%d/0%d/%d\n", (i+1), year, month, day);
										}
								}else{
										printf("#%d 0%d/%d/%d\n", (i+1), year, month, day);
								}
							}else{
									if(month < 10){
											if (day < 10){
												printf("#%d %d/0%d/0%d\n", (i+1), year, month, day);
											}
											else{
												printf("#%d %d/0%d/%d\n", (i+1), year, month, day);
											}
									}else
										printf("#%d %d/%d/%d\n", (i+1), year, month, day);
							}
					} else{
							printf("#%d -1\n", (i + 1));
					}
			} else{
					printf("#%d -1\n", (i + 1));
			}
		}
}
