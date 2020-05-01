/*
   2050 알파벳을 숫자로 변환
   ASCII code로 변환하면 되는 것 같음
   가 아니네,, 1부터 시작이니까 64 빼면 되는군
   '\0'으로 확인하는게 꼭 필요한가보다,,
   터미널에서 돌아가는데 제출하면 failed 뜬다
*/

#include <stdio.h>
#include <string.h>
int main(void){
		int i = 0;
		char *a;
		scanf("%s", a);
		// char a[200];

		// scanf("%c", a);
		// for(int i = 0; i < strlen(a); i++){
		i = 0;
		while(a[i] != '\0'){
				printf("%d ", a[i] - 64);
				i++;
		}
		printf("\n");
}
