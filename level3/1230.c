#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    for (int i = 1; i <= 1; i++){
        int len;
        int command;
        char *cyper;
        char result[4000];

        scanf("%d", &len);
        cyper = (char *)malloc (sizeof(char) * len);
        scanf("%s", cyper);
        scanf("%d", &command);
        printf("%s\n", cyper);

        for(int j = 0; j <= command; j++){
            char c;
            int x;
            int y;
            char *s;

            scanf("%c ", &c);
            if(c == 'I'){
                int index = 0;
                scanf("%d %d ", &x, &y);
                s = (char *)malloc (sizeof(char)*y);
                scanf("%s\n", s);
                
                for(int k = 0; k < x; k++){
                    result[k] = cyper[k];
                }
                strcat(result, s);
                index = x + y + 1;

                for(int k = x; cyper[k] != '\0'; k++){
                    result[index++] = cyper[k];
                }

                printf("%s\n", result);
                free(s);
            }
            else if(c == 'D'){
               int index = 0;
               scanf("%d %d", &x, &y);
               for(int k = 0; k <= x; k++){
                   result[k] = cyper[k];
               }
               index = x;
               for (int k = (x + y); cyper[k] != '\0'; k++){
                   result[index++] = cyper[k]; 
               }
               printf("%s\n", result);
            }
            else if(c == 'A'){
                scanf("%d\n", &y);
                s = (char *)malloc (sizeof(char)*y);
                scanf("%s\n", s);
                strcpy(result, cyper);
                strcat(result, s);
                free(s);
            }
        }
        free(cyper);
    }
}