
/*
   2047 신문 헤드라인
   모든 문자열을 대문자로 변경하는 프로그램
   int toupper (int c); 
 */

#include <stdio.h>
#include <ctype.h>

int main () {
		char str[80];
		int i = 0;

		scanf("%s", str);

		while(str[i]){
				putchar(toupper(str[i]));
				i++;
		}
		printf("\n");

}
