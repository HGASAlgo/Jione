#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int test = 0;
    char *result;
    scanf("%d", &test);

    int people[test];
    for(int i = 0; i < test; i++){
        scanf("%d", &people[i]);
    }


    for(int i = 0; i < test; i++){
        result = malloc(sizeof(char) * (people[i] * 5));
        if(result == NULL)
            return 0;

        result[0] = '\0';
        for(int j = 0; j < people[i]; j++){
            char *temp = malloc(sizeof(char) * 5);
            snprintf(temp, 5, "1/%d ", people[i]);
            strcat(result, temp);
            free(temp);
        }
        
        printf("#%d %s\n", i + 1, result);
        free(result);
    }

    return 0;
}