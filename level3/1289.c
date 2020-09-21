#include <stdio.h>
#include <string.h>

int main() {
    int test;
    char *bit;

    scanf("%d\n", &test);

    for(int i = 1; i <= test; i++){
        int result = 0;
        scanf("%s", bit);
        if(bit[0] == '1')
            result++;
        for (int j = 1; j < strlen(bit); j++){
            if(bit[j-1] != bit[j]){
                result++;
            }
        }
        printf("#%d %d\n", i, result);
    }
}