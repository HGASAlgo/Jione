#include <stdio.h>

int main() {
    int test;
    scanf("%d\n", &test);
    for (int i = 1; i <= test; i++) {
        int block;
        int blocks[100];
        int up = 0;
        int down = 0;
        scanf("%d\n", &block);
        for (int j = 0; j < block; j++) {
            scanf("%d ", &blocks[j]);
        }

        for (int j = 1; j < block; j++){
            if(blocks[j] > blocks[j-1]){
                if(up < blocks[j] - blocks[j-1])
                    up = blocks[j] - blocks[j-1];
            }
            else if(blocks[j] < blocks[j-1]){
                if(down < blocks[j-1] - blocks[j])
                    down = blocks[j-1] - blocks[j];
            }
        }
        printf("#%d %d %d\n", i, up, down);
    }
}