#include <stdio.h>

int main() {

    int test;

    scanf("%d\n", &test);

    for(int j = 0; j < test; j++){
        int input[10];
        int max = 0;
        int min = 100000000;

        for(int i = 0; i < 10; i++){
            scanf("%d ", &input[i]);
        }

        for (int i = 0; i < 10; i++){
            int sum = 0;
            
            while (input[i] > 0){
                sum += input[i] % 10;
                input[i] /= 10;
            }

            if (sum < min)
                min = sum;
            if (sum > max)
                max = sum;
        }
        printf("#%d %d %d\n", (j+1), max, min);
    }
    return 0;
}